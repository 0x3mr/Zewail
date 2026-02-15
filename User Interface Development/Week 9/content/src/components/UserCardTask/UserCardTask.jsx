import { useState } from "react";

export default function UserCardTask() {
  const [name, setName] = useState("");
  const [age, setAge] = useState("");
  const [show, setShow] = useState(false);

  return (
    <div>
      <input 
        placeholder="Name"
        value={name}
        onChange={(e) => setName(e.target.value)}
      />

      <input 
        placeholder="Age"
        value={age}
        onChange={(e) => setAge(e.target.value)}
      />

      <button onClick={() => setShow(!show)}>
        Toggle Info
      </button>

      {show && <p>{name} is {age} years old.</p>}
    </div>
  );
}
