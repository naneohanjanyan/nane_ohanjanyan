import { BrowserRouter, Route, Routes } from "react-router-dom";
import Users from "./Users/Users";
import ToDo from "./ToDo/ToDo";

function App() {
    return (
        <BrowserRouter>
            <Routes>
                <Route path="/" element={<Users />} />
                <Route path="/ToDo/:id" element={<ToDo />} />
            </Routes>
        </BrowserRouter>
    );
}

export default App;
