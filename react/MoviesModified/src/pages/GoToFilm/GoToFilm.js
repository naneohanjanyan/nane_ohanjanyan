import React, { useState, useEffect, useContext } from 'react';
import { useParams } from 'react-router-dom'
import FilmContext from '../../FilmContext';

export function GoToFilm() {
    const { allFilms } = useContext(FilmContext);
    const [film, setFilm] = useState({});
    const { id } = useParams();

    useEffect(() => {
        setFilm(allFilms.find(v => v.id === Number(id)))
    }, []);

    return (
        <div className='GoToFilm' >
            <h3>{film.name}</h3>
            <img src={film.image} />
            <p>{film.text}</p>
        </div>
    );
}

export default GoToFilm;