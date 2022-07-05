import { Routes, Route, Link } from 'react-router-dom'
import App from '../Movies/App'
import Homepage from '../Homepage/Homepage'
import NotFoundPage from '../NotFoundPage/NotFoundPage'
import GoToFilm from '../Movies/GoToFilm'
import './Menu.css'


export function Menu() {
    return (
        <div>
            <header>
                <Link to='/'>Home</Link>
                <Link to='/movies'>Movies</Link>
            </header>
            <Routes>
                <Route path='/' element={<Homepage />} />
                <Route path='/movies' element={<App />} />
                <Route path='movies/:id' element={<GoToFilm/>} />
                <Route path='*' element={<NotFoundPage />} />
            </Routes>
        </div>
    )
}

export default Menu;
