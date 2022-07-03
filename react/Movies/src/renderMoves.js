import "./App";
import "./App.css";
import moviesContainer from "./MoviesContainer";
import { Button } from "./Button/Button";

export let changedArr = moviesContainer;

export function RenderMovies({ newArr, setArr, setCount }) {
    function removeMovie(id) {
        changedArr = changedArr.filter((el) => el.id !== id);
        setArr(changedArr);
        setCount(changedArr.length);

    }
    return newArr.map((value) => {
        return (
            <div className="style" id={value.name} key={value.id.toString()}>
                <p className="title">{value.name}</p>
                <img src={value.image} />
                <p className="description">
                    {value.text} <br />
                    <Button onClick={() => removeMovie(value.id)}>Delete</Button>
                </p>
            </div>
        );
    });
}