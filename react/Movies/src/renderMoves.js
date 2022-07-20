import './pages/Movies/App'
import './App.css';
import { Link } from 'react-router-dom'
import moviesContainer from './MoviesContainer';
import { Button } from './Button/Button';

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
                    {value.text}
                </p> 
                <Button onClick={() => removeMovie(value.id)}>Delete</Button>
                <Link className='Link' to={`/movies/${value.id - 1}`}> <Button>Go to</Button></Link>
            </div>
        );
    });
}