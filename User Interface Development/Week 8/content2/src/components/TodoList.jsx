function TodoList({ todos, removeTodo }) {
  return (
    <ul className="list-disc pl-5">
      {todos.map((todo, index) => (
        <li key={index} className="flex justify-between mb-1">
          <span>{todo}</span>
          <button
            onClick={() => removeTodo(index)}
            className="text-red-500 hover:text-red-700"
          >
            Delete
          </button>
        </li>
      ))}
    </ul>
  );
}

export default TodoList;
