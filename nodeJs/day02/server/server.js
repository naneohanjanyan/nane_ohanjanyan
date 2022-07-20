const express = require("express");
const cors = require("cors");
const fs = require("fs");
const bodyParser = require("body-parser");
const { resolve } = require("path");
const app = express();
const port = 3001;
let users = fs.readFileSync("./data/users.json", "utf-8");

app.use(express.json());

app.use(cors());

app.use(
  bodyParser.urlencoded({
    extended: true,
  })
);

function toDos() {
  let todos = fs.readFileSync("./data/data.json", "utf-8");
  todos = JSON.parse(todos);
  return todos;
}

function render(todos, paramsUser, res) {
  fs.promises
    .writeFile(resolve("./data/data.json"), JSON.stringify(todos, undefined, 2))
    .then(() => res.send(todos.filter(item => item.userId == paramsUser)));

}

app.get(`/ToDo/:id`, (req, res) => {
  const todos = toDos();
  let id = req.params.id;
  const userTodos = todos.filter((todo) => todo.userId === Number(id));
  res.send(userTodos);
  res.end();
});

app.post("/ToDo/:user", (req, res) => {
  let todos = toDos();
  const addObj = {
    userId: Number(req.body.userId),
    id: Number(todos[todos.length - 1].id) + 1,
    task: req.body.task,
    complete: false,
  };

  const paramsUser = req.params.user;
  todos.push(addObj);
  render(todos, paramsUser, res);
});

app.put("/ToDo/:id/:user", (req, res) => {
  let todos = toDos();
  let mapped = todos.map((task) => {
    return task.id === Number(req.params.id)
      ? { ...task, complete: !task.complete }
      : { ...task };
  });
  const paramsUser = req.params.user;

  render(mapped, paramsUser, res)
});

app.delete("/ToDo/:user", (req, res) => {
  const todos = toDos();
  const filtered = todos.filter((task) => {
    return task.userId != req.params.user || (task.userId == req.params.user && !task.complete);
  });

  const paramsUser = req.params.user;
  render(filtered, paramsUser, res);
});

app.get("/", (req, res) => {
  res.send(users);
  res.end();
});

app.listen(port, () => {
  console.log(`Example app listening on port ${port}`);
});
