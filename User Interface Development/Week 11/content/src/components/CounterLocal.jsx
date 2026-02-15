import useCounter from "../hooks/useCounter";

export default function CounterLocal() {
  const { v, inc, dec, reset } = useCounter(5);
  return (
    <>
      <p>{v}</p>
      <button onClick={inc}>+</button>
      <button onClick={dec}>-</button>
      <button onClick={reset}>Reset</button>
    </>
  );
}
