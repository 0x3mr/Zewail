import { render, fireEvent } from "@testing-library/react";
import { Provider } from "react-redux";
import { store } from "../store/store";
import CounterRedux from "../components/CounterRedux";

test("counter buttons", () => {
  const { getByText } = render(
    <Provider store={store}><CounterRedux /></Provider>
  );

  fireEvent.click(getByText("+"));
  fireEvent.click(getByText("-"));
  fireEvent.click(getByText("Reset"));
});
