import { useState } from "react";
import './App.css';
import Message from "./components/Message";
import Counter from "./components/Counter";
import ProductList from "./components/ProductList";

function App() {
  const [name, setName] = useState("");
  const [age, setAge] = useState(0);

  return (
    <>
      {/* Task 1: Parent JSX + dynamic expressions */}
      <div className="flex flex-col bg-red-400 m-5 p-3 border-2 gap-5">
        <span>Name: {name}</span>
        <span>Age: {age}</span>
        <button
          className="bg-white text-red-500 px-3 py-1 rounded hover:bg-red-100"
          onClick={() => { setAge(18); setName("Amr") }}
        >
          Show
        </button>
      </div>

      <div className="bg-amber-200 text-blue-600 p-3 m-5 rounded">
        Very cool stylings
      </div>

      {/* Task 2: Components */}
      <div className="m-5 p-3 flex flex-col gap-5">
        {/* Message components demonstrating props */}
        <Message text="amr amr amooor" color="purple" />
        <Message text="react ig" color="green" />
        <Message text="BROOOOO, im dyinggggggg" color="orange" />

        {/* Counter component */}
        <Counter />

        {/* Product list component */}
        <ProductList />
      </div>
    </>
  );
}

export default App;
