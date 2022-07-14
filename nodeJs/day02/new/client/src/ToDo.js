import React, { useEffect, useState } from 'react';

function ToDo() {
    const [inputValue, setInputValue] = useState('');
    const [todos, setTodos] = useState([]);
    const [isChecked, setIsChecked] = useState([]);
    const SERVER_URL = 'http://localhost:3001';

    useEffect(() => {
        fetch(`${SERVER_URL}`)
            .then((response) => response.json())
            .then(setTodos);
    }, []);

    const getInputValue = event => {
        setInputValue(event.target.value);
    }

    const addTodo = (inputValue) => {
        const sendingData = {
            task: inputValue
        };
        console.log(inputValue);
        fetch('http://localhost:3001/addToDo', {
            method: 'POST',
            body: JSON.stringify(sendingData),
            headers: {
                'Content-Type': 'application/json; charset=UTF-8'
            },
        });
    };

    const handle = (id) => {
        let mapped = todos.map((task) => {
            return task.id === Number(id)
                ? { ...task, complete: !task.complete }
                : { ...task };
        });
        setTodos(mapped);

    }

    const removeToDo = () => {
        let filtered = todos.filter((task) => {
            return !task.complete;
        });
        setTodos(filtered);
    }

    return (
        <div>
            <h1>Todos</h1>
            <div>
                <input onChange={getInputValue} value={inputValue} />
                <button onClick={() => addTodo(inputValue)}>Add</button>
            </div>
            <ol>
                {todos.map((todo) => (
                    <li key={todo.id}>
                        <input type="checkbox" onClick={() => handle(todo.id)} />
                        <span>{todo.task} </span>
                    </li>
                ))}
            </ol>
            <button onClick={removeToDo}>Remove</button>

        </div>
    );
}

export default ToDo