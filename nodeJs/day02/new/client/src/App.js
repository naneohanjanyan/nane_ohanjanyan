// import Users from './Users';
import { BrowserRouter, Route, Routes } from 'react-router-dom';
import ToDo from './ToDo';

function App() {
    return (
        <BrowserRouter>
            <Routes>
                {/* <Route path="/" element={<Userst />} /> */}
                <Route path="/" element={<ToDo />} />
            </Routes>
        </BrowserRouter>
    );
}

export default App;