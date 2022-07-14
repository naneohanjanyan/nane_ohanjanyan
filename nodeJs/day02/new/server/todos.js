const express = require('express');
const cors = require('cors');
const fs = require('fs');
const bodyParser = require('body-parser');

const todos = require("./data/data.json");

const app = express();
const port = 3001;

// app.use(express.json())
app.use(express.json())

app.use(
  bodyParser.urlencoded({
    extended: true,
  })
);

app.use(cors());

app.get('/', (req, res) => {
  // const userTodos = todos.filter(todo => todo.userId === Number(req.params.userId));
  res.send(JSON.stringify(todos));
  res.end();
});


app.post("/addToDo", (req, res) => {

  console.log(res.body)
  // const addObj = {
  //   "id": JSON.parse(data).length + 1,
  //   "task": req.body.todoName,
  //   "complete": false,
  // };
  // fs.readFile("./data/data.json", function (err, data) {
  //   const json = JSON.parse(data)
  //   json.push(addObj);
  //   fs.writeFile("./data/data.json", JSON.stringify(json), function () { });
  // });
  // res.send(JSON.stringify(data), function () { });
  // res.end();

});

app.listen(port, () => {
  console.log(`Example app listening on port ${port}`);
});
