import React, { useRef, useState } from "react";
import Input from "../Input/Input";
import Button from "../Button/Button"
import Spider from "../../images/download.jpeg"
import "./Modal.css";

export function Modal({ onClose, show, addFilm, film }) {
    const [filmName, setFilmName] = useState('');
    const [description, setDescription] = useState('');
    if (!show) {
        return null;
    }

    const add = () => {
        const newFilm = {
            id: Date.now(),
            filmName,
            image: Spider,
            description
        };

        addFilm(newFilm);
    };

    return (
        <div className="modal" onClick={onClose}>
            <div className="modal-content">
                <h4>Add film</h4>
                <Button className='close' onClick={onClose}>X</Button>
                <Input placeholder='Film name' oncChange={(event) => setFilmName(event.target.value)} />
                <Input placeholder='description' oncChange={(event) => setDescription(event.target.value)} />
                <Button onClick={add}>Add</Button>
            </div>
        </div>
    )
}

export default Modal;
