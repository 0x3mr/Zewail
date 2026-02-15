import { useState } from "react";

export default function ControlledInputTask() {
  const [username, setUsername] = useState("");

  return (
    <div>
      <input 
        type="text"
        placeholder="Enter username"
        value={username}
        onChange={(e) => setUsername(e.target.value)}
      />

      <p>Current value: {username}</p>
    </div>
  );
}
