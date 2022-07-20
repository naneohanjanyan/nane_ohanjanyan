const express = require("express");
const cors = require("cors");
const bodyParser = require("body-parser");
const mongoose = require("mongoose");
const { Schema } = mongoose;

const app = express();
const port = 3001;

app.use(express.json());

app.use(cors());

app.use(
  bodyParser.urlencoded({
    extended: true,
  })
);

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

app.get(`/ToDo/:id`, async (req, res) => {
  try {
    const todo = await todoModel.find({ userId: req.params.id });
    res.send(todo);
  } catch (error) {
    res.status(500).send(error);
  }
});

app.post("/ToDo/:user", async (req, res) => {
  try {
    const newObj = {
      userId: Number(req.body.userId),
      id: Number(new Date()),
      task: req.body.task,
      complete: false,
    };
    await todoModel.insertMany(newObj);
    let newtodo = await todoModel.find({ userId: req.body.userId });
    res.send(newtodo);
  } catch (error) {
    res.status(500).send(error);
  }
});

app.put("/ToDo/:id/:user", async (req, res) => {
  const todo = await todoModel.find({ id: req.params.id });

  await todoModel.findOneAndUpdate(
    { id: req.params.id },
    { complete: !todo[0].complete }
  );
  const newTodo = await todoModel.find({ userId: req.params.user });
  res.send(newTodo);
});

app.delete("/ToDo/:user", async (req, res) => {
  await todoModel.deleteMany({ userId: req.params.user, complete: true });
  const newToDo = await todoModel.find({ userId: req.params.user });
  res.send(newToDo);
});

app.get("/", async (req, res) => {
  try {
    const users = await userModel.find({});
    res.send(users);
  } catch (error) {
    res.status(500).send(error);
  }
});

app.listen(port, () => {
  console.log(`Example app listening on port ${port}`);
});
