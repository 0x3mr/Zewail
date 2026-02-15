// src/hooks/useCounterRedux.js
import { useSelector, useDispatch } from "react-redux";
import { increment, decrement, reset } from "../store/counterSlice";

export default function useCounterRedux() {
  const value = useSelector((s) => s.counter.value);
  const d = useDispatch();
  return {
    value,
    inc: () => d(increment()),
    dec: () => d(decrement()),
    reset: () => d(reset()),
  };
}
