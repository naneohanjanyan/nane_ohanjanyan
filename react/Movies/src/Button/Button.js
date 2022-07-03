import "./Button.css"

export const Button = ({ onClick, children }) => {
    console.log("remove")
    return (
        <button className="buttonComponent" onClick={onClick}>{children}</button>
    );
}
