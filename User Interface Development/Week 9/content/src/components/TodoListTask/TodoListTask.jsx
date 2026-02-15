export default function TodoListTask() {
  const todos = [
    { id: 1, title: "Study React" },
    { id: 2, title: "Finish Lab 9" },
    { id: 3, title: "Prepare for quiz" },
  ];

  return (
    <ul>
      {todos.map(todo => (
        <li key={todo.id}>{todo.title}</li>
      ))}
    </ul>
  );
}
