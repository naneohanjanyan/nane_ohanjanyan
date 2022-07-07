import React from "react";

export function Input({ placeholder, oncChange }) {
   return <input placeholder={placeholder} onChange={oncChange} />
}

export default Input;