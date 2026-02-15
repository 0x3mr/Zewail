import { render, fireEvent, screen } from "@testing-library/react";
import { Provider } from "react-redux";
import { store } from "../store/store";
import CounterRedux from "../components/CounterRedux";

test("increment, decrement, reset buttons work", () => {
  render(
    <Provider store={store}>
      <CounterRedux />
    </Provider>
  );

  fireEvent.click(screen.getByText("+"));
  fireEvent.click(screen.getByText("-"));
  fireEvent.click(screen.getByText("Reset"));

  expect(screen.getByText("Value: 0")).toBeInTheDocument();
});
