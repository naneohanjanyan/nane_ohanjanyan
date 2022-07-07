import React, { useState, useEffect, useContext } from "react";
import Input from "../../Components/Input/Input";
import Button from "../../Components/Button/Button";
import Modal from '../../Components/Modal/Modal'
import FilmContext from "../../FilmContext";
import FilmRender from './FilmRender'


export function Films() {

    const { allFilms, setAllFilms } = useContext(FilmContext)
    const [search, setSearch] = useState('');
    const [filterdFilms, setFilterdFilms] = useState([]);
    const [show, setShow] = useState(false);

    const searchFilm = (event) => {
        setSearch(event.target.value)
    };

    useEffect(() => {
        setFilterdFilms(!search ? allFilms : allFilms.filter(
            value => value.name.toLowerCase().includes(search.toLowerCase())));
    }, [search]);

    useEffect(() => { setFilterdFilms(allFilms) }, [allFilms]);

    const addFilm = (newFilm) => {
        setShow(false);
        setAllFilms([...allFilms, newFilm]);
    };

    const deletFilm = (id) => {
        setAllFilms(allFilms => allFilms.filter(v => v.id !== id));
    };

    return (
        <header>
            <div>
                <div className="count">count: {filterdFilms.length}</div>
                <Input
                    className='search'
                    placeholder="search"
                    onChange={searchFilm}
                />
                <Button onClick={() => setShow(true)}>add</Button>
            </div>
            <Modal onClose={() => setShow(false)} show={show} addFilm={() => addFilm} film={allFilms} />
            <FilmRender films={filterdFilms} onClick={deletFilm} />
        </header>
    );
}

export default Films;