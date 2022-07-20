import React, { useEffect, useState } from "react";
import { useParams } from "react-router";
import Button from "../Component/Button";
import './ToDo.css'


function ToDo({ socket }) {
  const { id } = useParams();
  const [inputValue, setInputValue] = useState("");
  const [todos, setTodos] = useState([]);

  useEffect(() => {
    const emit = async function () {
      await socket.emit('getTodo', id);
    }
    emit();
  }, []);

  useEffect(() => {
    const emit = async function () {
      await socket.on('reciveTodo', todo => setTodos([...todo])
      )
    }
    emit()
  }, [socket]);

  const getInputValue = (event) => {
    setInputValue(event.target.value);
  };

  const addTodo = () => {
    const sendingData = {
      task: inputValue,
      userId: id
    };

    socket.emit('addData', sendingData);
    socket.on('getAddTodoList', newTodo => setTodos([...newTodo]))
    setInputValue("");
  };

  const handle = (taskId) => {
    socket.emit('put', { taskId, id })
  };

  const removeToDo = () => {
    socket.emit('remove', id)
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