import { useDispatch } from "react-redux";
import { increment, decrement, reset } from "../store/counterSlice";

export default function CounterControls() {
  const d = useDispatch();
  return (
    <div className="flex gap-2">
      <button onClick={() => d(increment())}>+</button>
      <button onClick={() => d(decrement())}>-</button>
      <button onClick={() => d(reset())}>Reset</button>
    </div>
  );
}
