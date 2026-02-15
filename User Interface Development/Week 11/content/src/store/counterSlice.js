import { createSlice } from "@reduxjs/toolkit";

const counterSlice = createSlice({
  name: "counter",
  initialState: { value: 0, history: [0] },
  reducers: {
    increment: (s) => {
      s.value++;
      s.history.push(s.value);
    },
    decrement: (s) => {
      s.value--;
      s.history.push(s.value);
    },
    reset: (s) => {
      s.value = 0;
      s.history.push(0);
    },
  },
});

export const { increment, decrement, reset } = counterSlice.actions;
export default counterSlice.reducer;
