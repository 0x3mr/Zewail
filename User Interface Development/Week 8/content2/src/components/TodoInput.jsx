function TodoInput({ addTodo }) {
  const handleAdd = () => {
    const input = document.getElementById("todo-input");
    const value = input.value.trim();
    if (value) {
      addTodo(value); // pass the todo back to parent
      input.value = "";
    }
  };

  return (
    <div className="flex gap-2 mb-4">
      <input
        id="todo-input"
        type="text"
        placeholder="Enter a todo"
        className="border rounded px-2 py-1 flex-1"
      />
      <button
        onClick={handleAdd}
        className="bg-blue-500 text-white px-3 py-1 rounded hover:bg-blue-600"
      >
        Add
      </button>
    </div>
  );
}

export default TodoInput;
