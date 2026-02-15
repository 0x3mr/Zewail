import { useSelector } from "react-redux";

export default function CounterDisplay() {
  const value = useSelector((s) => s.counter.value);
  return <h2 className="text-xl">Value: {value}</h2>;
}
