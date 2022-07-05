import { useParams, Link } from 'react-router-dom'
import { changedArr } from '../../renderMoves';
import './GoToFilm.css'

export function GoToFilm() {
    const { id } = useParams();

    return (
        <div className='GoToFilm' >
            <h3>{changedArr[id].name}</h3>
            <img src={changedArr[id].image} />
            <p>{changedArr[id].text}</p>
        </div>
    )

}

export default GoToFilm;