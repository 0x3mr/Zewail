import { useState } from "react";

export default function RegisterTask() {
  const [email, setEmail] = useState("");
  const [pass, setPass] = useState("");
  const [msg, setMsg] = useState("");

  const handleSubmit = (e) => {
    e.preventDefault();

    if (!email.includes("@")) {
      setMsg("Invalid email format");
    } else if (pass.length < 6) {
      setMsg("Password must be at least 6 characters");
    } else {
      setMsg("Registration successful!");
    }
  };

  return (
    <div>
      <form onSubmit={handleSubmit}>
        <input 
          type="email"
          placeholder="Email"
          value={email}
          onChange={(e) => setEmail(e.target.value)}
        />

        <input 
          type="password"
          placeholder="Password"
          value={pass}
          onChange={(e) => setPass(e.target.value)}
        />

        <button type="submit">Register</button>
      </form>

      <p>{msg}</p>
    </div>
  );
}
