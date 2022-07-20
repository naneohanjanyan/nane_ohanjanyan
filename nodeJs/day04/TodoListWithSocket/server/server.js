const express = require("express");
const cors = require("cors");
const bodyParser = require("body-parser");
const mongoose = require("mongoose");
const { Schema } = mongoose;
const http = require("http");
const { Server } = require("socket.io");

const app = require("express")();
const port = 3001;

app.use(cors());
app.use(express.json());
app.use(
    bodyParser.urlencoded({
        extended: true,
    })
);

const server = http.createServer(app);
const io = new Server(server, {
    cors: {
        origin: "http://localhost:3000",
    },
});

mongoose.connect("mongodb://localhost:27017/to_do_list", {
    useNewUrlParser: true,
    useUnifiedTopology: true,
});

const TodoSchem = new Schema({
    userId: Number,
    id: Number,
    task: String,
    complete: Boolean,
});

const UsersSchem = new Schema({
    userId: Number,
    name: String,
    surname: String,
});

const userModel = mongoose.model("users", UsersSchem);
const todoModel = mongoose.model("datas", TodoSchem);

io.on('connection', (socket) => {
    socket.on('getUsersList', async () => {
        const users = await userModel.find({});
        io.emit('getUsersList', users);
    });

    socket.on('getTodo', async (id) => {
        const todo = await todoModel.find({ userId: id });
        io.emit('reciveTodo', todo);
    })

    socket.on('addData', async (data) => {
        const newObj = {
            userId: Number(data.userId),
            id: Number(new Date()),
            task: data.task,
            complete: false,
        };
        await todoModel.insertMany(newObj);
        let newtodo = await todoModel.find({ userId: data.userId });
        io.emit('reciveTodo', newtodo);
    });

    socket.on('put', async (ids) => {
        const todo = await todoModel.find({ id: ids.taskId });
        console.log(ids)
        await todoModel.findOneAndUpdate(
            { id: ids.taskId },
            { complete: !todo[0].complete }
        );
        const newTodo = await todoModel.find({ userId: ids.id });
        io.emit('reciveTodo', newTodo);
    });

    socket.on('remove', async (userId) => {
        await todoModel.deleteMany({ userId: userId, complete: true });
        const newToDo = await todoModel.find({ userId: userId });
        io.emit('reciveTodo', newToDo);
    });
})

server.listen(port, () => {
    console.log(`Example app listening on port ${port}`);
});