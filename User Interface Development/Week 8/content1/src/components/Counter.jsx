import { useState } from "react";

function Counter() {
  const [count, setCount] = useState(0);

  return (
    <div className="flex flex-col items-start gap-2 p-3 border-2 border-blue-400 rounded">
      <p>Count: {count}</p>
      <button
        className="bg-blue-500 text-white px-3 py-1 rounded hover:bg-blue-600"
        onClick={() => setCount(count + 1)}
      >
        Increment
      </button>
    </div>
  );
}

export default Counter;
