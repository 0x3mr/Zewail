import { BarChart, Bar } from "recharts";
import { useSelector } from "react-redux";

export default function CounterBarChart() {
  const v = useSelector(s => s.counter.value);
  return (
    <BarChart width={200} height={150} data={[{ v }]}>
      <Bar dataKey="v" />
    </BarChart>
  );
}
