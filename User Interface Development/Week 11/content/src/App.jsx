import CounterRedux from "./components/CounterRedux";
import CounterLocal from "./components/CounterLocal";
import CounterChart from "./components/CounterChart";
import CounterBarChart from "./components/CounterBarChart";
import useToggle from "./hooks/useToggle";
import useFetch from "./hooks/useFetch";

export default function App() {
  // Dark mode toggle example
  const [dark, toggleDark] = useToggle();

  // Fetch example
  const posts = useFetch("https://jsonplaceholder.typicode.com/posts").slice(0, 5);

  return (
    <div className={`${dark ? "bg-gray-800 text-white" : "bg-white text-black"} min-h-screen p-6 space-y-6`}>
      <h1 className="text-2xl font-bold">Lab #11 Demo</h1>

      {/* Redux Counter */}
      <section className="p-4 border rounded">
        <h2 className="font-semibold">Redux Counter</h2>
        <CounterRedux />
      </section>

      {/* Local Counter */}
      <section className="p-4 border rounded">
        <h2 className="font-semibold">Local Hook Counter</h2>
        <CounterLocal />
      </section>

      {/* Charts */}
      <section className="p-4 border rounded flex gap-6">
        <div>
          <h2 className="font-semibold">Line Chart (Redux History)</h2>
          <CounterChart />
        </div>
        <div>
          <h2 className="font-semibold">Bar Chart (Current Value)</h2>
          <CounterBarChart />
        </div>
      </section>

      {/* Toggle Dark Mode */}
      <section className="p-4 border rounded">
        <button
          className="px-4 py-2 border rounded"
          onClick={toggleDark}
        >
          Toggle Dark Mode
        </button>
      </section>

      {/* Fetch Hook */}
      <section className="p-4 border rounded">
        <h2 className="font-semibold">Fetch Hook - First 5 Posts</h2>
        <ul className="list-disc pl-5">
          {posts.map(post => (
            <li key={post.id}>{post.title}</li>
          ))}
        </ul>
      </section>
    </div>
  );
}
