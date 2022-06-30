import { renderMoves } from "./renderMoves";
import { useState } from "react";

function App() {
  const [name, setName] = useState("");
  let newArr = renderMoves(name);
  return (
    <div id="App">
      <input
        id="input"
        type="text"
        placeholder="search"
        onChange={(event) => {
          setTimeout(() => setName(event.target.value), 500);
        }}
      ></input>
      <div id="films">{newArr}</div>
    </div>
  );
}

export default App;
