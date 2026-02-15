import { LineChart, Line, XAxis } from "recharts";
import { useSelector } from "react-redux";

export default function CounterChart() {
  const data = useSelector(s =>
    s.counter.history.map((v, i) => ({ i, v }))
  );

  return (
    <LineChart width={300} height={200} data={data}>
      <XAxis dataKey="i" />
      <Line dataKey="v" />
    </LineChart>
  );
}
