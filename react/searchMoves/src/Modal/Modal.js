import React from "react";
import ReactDOM from "react-dom";
import { CSSTransition } from "react-transition-group";
import "./Modal.css";

const Modal = props => {
    return ReactDOM.createPortal(
        <CSSTransition
            in={props.show}
            // unmountOnExit
            timeout={{ enter: 0 }}
        >
            <div className="modal">
                <div className="modal-content">
                    <div className="modal-body">{props.children}</div>
                    <div className="modal-footer">
{/*                         <button onClick={props.onClose} className="button">
                            X
                        </button> */}
                    </div>
                </div>
            </div>
        </CSSTransition>,
        document.getElementById("root")
    );
};

export default Modal;
