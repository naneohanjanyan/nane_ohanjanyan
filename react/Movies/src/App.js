import { changedArr, RenderMovies } from "./renderMoves";
import { useEffect, useState, useRef } from "react";
import Button from "./Button/Button";
import Modal from "./Modal/Modal";
import moviesContainer from "./MoviesContainer";
import Spider from "./images/download.jpeg";

function moviesFilter(name) {
  const filteredАrr =
    name == ""
      ? changedArr
      : changedArr.filter(
        (value) =>
          value.name.toLowerCase().substring(0, name.length) ===
          name.toLowerCase()
      );
  return filteredАrr;
}

export function App() {
  const [count, setCount] = useState(moviesContainer.length);
  const [name, setName] = useState('');
  const [newArr, setNewArr] = useState([]);
  const [show, setShow] = useState(false);
  const [newFilmName, setNewFilmName] = useState('');
  const [newFilmDesc, setNewFilmDesc] = useState('');
  const refNewFilmNameInputClear = useRef();
  const refNewFilmDescInputClear = useRef();

  useEffect(() => {
    setNewArr(moviesFilter(name));
  }, [name]);

  function addMovie() {
    setShow(false);
    const createdArr = {
      id: moviesContainer[moviesContainer.length - 1].id + 1,
      name: `${newFilmName}`,
      image: Spider,
      text: `${newFilmDesc}`
    };
    changedArr.push(createdArr)
    setNewArr(changedArr);
    setCount(changedArr.length);
    refNewFilmNameInputClear.current.value = '';
    refNewFilmDescInputClear.current.value = '';
  }

  return (
    <div id="App">
      <div className="header">
        <div className="count">count: {count}</div>
        <input
          id="input"
          type="text"
          placeholder="search"
          onChange={(event) => {
            setTimeout(() => setName(event.target.value), 500);
          }}
        ></input>
        <Button onClick={() => setShow(true)}>add</Button>
        <Modal title="My Modal" onClose={() => setShow(false)} show={show}>
          <p>Add film
            <Button onClick={() => setShow(false)}>X</Button>
          </p>
          <div className="modalContent">
            <input type="text" placeholder="Film name" ref={refNewFilmNameInputClear} className="filmName style__"
              onChange={(event) => setNewFilmName(event.target.value)} />
            <input type="text" placeholder="description" ref={refNewFilmDescInputClear} className="description style__"
              onChange={(event) => setNewFilmDesc(event.target.value)} />
            <Button onClick={addMovie}>Add</Button>
          </div>
        </Modal>
      </div>
      <div id="films">
        <RenderMovies newArr={newArr} setArr={setNewArr} setCount={setCount} />
      </div>
    </div>
  );
}

export default App;
