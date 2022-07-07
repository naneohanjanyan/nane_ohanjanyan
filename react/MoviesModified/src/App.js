import { Routes, Route, Outlet, BrowserRouter } from 'react-router-dom';
import { useState } from 'react';
import filmsContainer from './filmsContainer'
import Links from './Links';
import HomePage from './pages/HomePage/HomePage';
import Films from './pages/Film/Films';
import GoToFilm from './pages/GoToFilm/GoToFilm';
import NotFoundPage from './pages/NotFoundPage/NotFoundPage';
import FilmContext from './FilmContext';

export function App() {
    const [allFilms, setAllFilms] = useState(filmsContainer);

    return (
        <FilmContext.Provider value={{ allFilms, setAllFilms }}>
            <BrowserRouter>
                <Routes>
                    <Route path="/" element={<Links />}>
                        <Route index element={<HomePage />} />
                        <Route path='films/' element={<Outlet />}>
                            <Route index element={<Films />} />
                            <Route path=':id' element={<GoToFilm />} />
                        </Route>
                        <Route path='*' element={<NotFoundPage />} />
                    </Route>
                </Routes>
            </BrowserRouter>
        </FilmContext.Provider>
    )
}

export default App;