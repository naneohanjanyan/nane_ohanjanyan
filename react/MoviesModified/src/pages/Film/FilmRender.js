import { Link } from 'react-router-dom'
import Button from '../../Components/Button/Button';
import '../../App.css';

export function FilmRender({ films, onClick }) {
    return films.map((value) => {
        return (
            <div key={value.id} className="style" id={value.name}>
                <p className="title">{value.name}</p>
                <img src={value.image} />
                <p className="description">
                    {value.text}
                </p>
                <Button onClick={() => onClick(value.id)}>Delete</Button>
                <Link className='Link' to={`${value.id}`}> <Button>Go to</Button></Link>
            </div>
        );
    });
}

export default FilmRender;