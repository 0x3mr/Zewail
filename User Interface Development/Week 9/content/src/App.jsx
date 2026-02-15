import { useState } from "react";
import './App.css'

import WelcomeTask from "./components/WelcomeTask/WelcomeTask";
import ControlledInputTask from "./components/ControlledInputTask/ControlledInputTask";
import RegisterTask from "./components/RegisterTask/RegisterTask";
import UserCardTask from "./components/UserCardTask/UserCardTask";
import TodoListTask from "./components/TodoListTask/TodoListTask";
import CounterButton from "./components/CounterButton/CounterButton";

function App() {

  // Counter task state + function
  const [count, setCount] = useState(0);
  const increase = () => setCount(prev => prev + 1);

  return (
    <>
      first
      <WelcomeTask />
      <br/><br/><br/>

      second
      <ControlledInputTask />
      <br/><br/><br/>

      third
      <RegisterTask />
      <br/><br/><br/>

      fourth
      <UserCardTask />
      <br/><br/><br/>

      fifth
      <TodoListTask />
      <br/><br/><br/>

      sixth
      <h2>Count: {count}</h2>
      <CounterButton increase={increase} />
    </>
  );
}

export default App;
