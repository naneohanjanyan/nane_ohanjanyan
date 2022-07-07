import { Link, Outlet } from "react-router-dom";

export function Links() {
  return (
    <>
      <header className="header">
        <Link to="/"> Home</Link>
        <Link to="/films"> Films</Link>
      </header>
      <Outlet />
    </>
  );
}

export default Links;