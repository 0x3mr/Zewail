import { renderHook, act } from "@testing-library/react";
import useCounter from "../hooks/useCounter";

test("useCounter increment, decrement, reset", () => {
  const { result } = renderHook(() => useCounter(5));

  act(() => result.current.inc());
  expect(result.current.v).toBe(6);

  act(() => result.current.dec());
  expect(result.current.v).toBe(5);

  act(() => result.current.reset());
  expect(result.current.v).toBe(5);
});
