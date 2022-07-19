const app = require("express")();
const http = require("http");
const cors = require("cors");
const { Server } = require("socket.io");

app.use(cors());

const server = http.createServer(app);

const io = new Server(server, {
    cors: {
        origin: "http://localhost:3000",
        methods: ["GET", "POST"],
    },
});

io.on("connection", (socket) => {
    console.log(4444444);
    socket.on("send_message", (data) => {
        io.emit("receive_message", data);
    });

});

server.listen(3001, () => {
    console.log("SERVER RUNNING");
});