const app = require("express")();
const http = require("http");
const cors = require("cors");
const { Server } = require("socket.io");

app.use(cors());

const server = http.createServer(app);

const io = new Server(server, {
  cors: {
    origin: "http://localhost:3000",
  },
});

io.on("connection", (socket) => {
    socket.on('joinRoom', data => {
        socket.join(data);
    })

  socket.on("send_message", (data) => {
    io.emit("receive_message", data);
  });
});

server.listen(3001, () => {
  console.log("SERVER RUNNING");
});
