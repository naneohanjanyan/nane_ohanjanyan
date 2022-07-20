import React, { useEffect, useState } from "react";
import io from "socket.io-client";
import Chat from "./Chat";
import './App.css'

const socket = io.connect("http://localhost:3001");

function App() {
    const [userName, setUsername] = useState('');
    const [showChat, setShowChat] = useState(false);

    const join = ( ) => {
        setShowChat(true);
        socket.emit('joinRoom', userName);
        
    }

  return (
    <div className="App">
      {!showChat ? (
        <div className="joinChatContainer">
          <h3>Join A Chat</h3>
          <input
            type="text"
            placeholder="John..."
            onChange={(event) => {
              setUsername(event.target.value);
            }}
          />
          <button onClick={join}>Join</button>
        </div>
      ) : (
        <Chat socket={socket} userName={userName} />
      )}
    </div>
  );
}

export default App;
