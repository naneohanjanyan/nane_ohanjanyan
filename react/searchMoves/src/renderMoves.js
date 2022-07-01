import "./App";
import "./App.css";

import arr from "./arrayMovies";

export let filterArr = arr;

export function moviesFilter(name) {
    const newArr =
        name == ""
            ? filterArr
            : filterArr.filter(
                (value) =>
                    value.name.toLowerCase().substring(0, name.length) ===
                    name.toLowerCase()
            );

    return newArr;
}

export function Render({ newArr, setArr, setCount }) {
    return newArr.map((value) => {
        return (
            <div className="style" id={value.name} key={value.id.toString()}>
                <p className="title">{value.name}</p>
                <img src={value.image} />
                <p className="description">
                    {" "}
                    {value.text} <br />
                    <button className="removebtn"
                        id={value.id}
                        onClick={() => {
                            filterArr = filterArr.filter((el) => el.id !== value.id);
                            setArr(filterArr);
                            setCount(filterArr.length);
                        }}
                    >
                        delete
                    </button>
                </p>
            </div>
        );
    });
}
