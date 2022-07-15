import React, { useEffect, useState } from "react";
import { useParams } from "react-router";
import Button from "../Component/Button";
import './ToDo.css'

function ToDo() {
  const { id } = useParams();
  const [inputValue, setInputValue] = useState("");
  const [todos, setTodos] = useState([]);
  const URL = "http://localhost:3001";

  useEffect(() => {
    fetch(`${URL}/ToDo/${id}`)
      .then((response) => response.json())
      .then(setTodos);
  }, []);

  const getInputValue = (event) => {
    setInputValue(event.target.value);
  };

  const addTodo = () => {
    const sendingData = {
      task: inputValue,
      userId: id
    };

    fetch(`${URL}/ToDo/${id}`, {
      method: "POST",
      body: JSON.stringify(sendingData),
      headers: {
        "Content-Type": "application/json; charset=UTF-8",
      },
    })
      .then((resp) => resp.json())
      .then(setTodos);

    setInputValue("");
  };

  const handle = (taskId) => {

    fetch(`${URL}/ToDo/${taskId}/${id}`, {
      method: "PUT",
      headers: {
        "Content-Type": "application/json; charset=UTF-8",
      },
    })
      .then((response) => response.json())
      .then(setTodos);
  };

  const removeToDo = () => {
    fetch(`${URL}/ToDo/${id}`, {method: 'delete'})
      .then((response) => response.json())
      .then(setTodos);
  };

  return (
    <div className="ToDo">
      <h1>Todos</h1>
      <div>
        <input onChange={getInputValue} value={inputValue} />
        <Button onClick={addTodo}>Add</Button>
      </div>
      <ol>
        {todos.map((todo) => (
          <li key={todo.id}>
            <input
              type="checkbox"
              onChange={() => handle(todo.id)}
              className='checkBox'
              checked={todo.complete}
            />
            <span>{todo.task} </span>
          </li>
        ))}
      </ol>
      <Button onClick={removeToDo}>Remove</Button>
    </div>
  );
}

export default ToDo;
