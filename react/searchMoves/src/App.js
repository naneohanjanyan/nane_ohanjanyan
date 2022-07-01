import { filterArr, moviesFilter, Render } from "./renderMoves";
import { useEffect, useState } from "react";
import arr from "./arrayMovies";
import Modal from "./Modal/Modal";
import Spider from "./images/download.jpeg";

export function App() {
  const [count, setCount] = useState(arr.length);
  const [name, setName] = useState("");
  const [newArr, setNewArr] = useState([]);
  const [show, setShow] = useState(false);

  useEffect(() => {
    setNewArr(moviesFilter(name));
  }, [name]);

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
        <button onClick={() => setShow(true)}>add</button>
        <Modal title="My Modal" onClose={() => setShow(false)} show={show}>
          <p>Add filme
            <button onClick={() => setShow(false)} className="button"> X </button>
          </p>
          <div className="modalContent">
            <input type="text" placeholder="Film name" className="filmName style__" />
            <input type="text" placeholder="description" className="description style__" />
            <button className="modalAdd style__" onClick={() => {
              setShow(false);
              const createdArr = {
                id: arr[arr.length - 1].id + 1,
                name: `${document.querySelector('.filmName').value}`,
                image: Spider,
                text: `${document.querySelector('.description').value}`
              };
              filterArr.push(createdArr)
              setNewArr(filterArr);
              setCount(filterArr.length);
              document.querySelector('.filmName').value = "";
              document.querySelector('.description').value = "";
            }
            }>Add</button>
          </div>
        </Modal>
      </div>
      <div id="films">
        <Render newArr={newArr} setArr={setNewArr} setCount={setCount} />
      </div>
    </div>
  );
}

export default App;
