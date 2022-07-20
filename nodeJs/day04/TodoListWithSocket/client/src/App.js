import { BrowserRouter, Route, Routes } from "react-router-dom";
import Users from "./Users/Users";
import ToDo from "./ToDo/ToDo";
import io from "socket.io-client";
const socket = io.connect("http://localhost:3001");

function App() {
    return (
        <BrowserRouter>
            <Routes>
                <Route path="/" element={<Users socket={socket} />} />
                <Route path="/ToDo/:id" element={<ToDo socket={socket} />} />
            </Routes>
        </BrowserRouter>
    );
}

export default App;
