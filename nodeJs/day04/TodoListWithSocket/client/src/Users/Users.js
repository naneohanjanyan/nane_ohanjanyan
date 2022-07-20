import { Link } from 'react-router-dom';
import { useState, useEffect } from 'react'
import './Users.css'

export function Users({ socket }) {
  const URL = "http://localhost:3001";
  const [users, setUsers] = useState([]);

  useEffect(() => {
    socket.emit('getUsersList');
    socket.on('getUsersList', (users) => setUsers([...users]))
    // fetch(`${URL}`)
    //   .then((response) => response.json())
    //   .then(setUsers);
  }, []);

  return (
    <div className='usersList'>
      <ol>
        {users.map((user) => (
          <li key={user.userId}>
            <Link to={`/ToDo/${user.userId}`} >{user.name}</Link>
          </li>
        ))}
      </ol>
    </div>
  );
}

export default Users;
