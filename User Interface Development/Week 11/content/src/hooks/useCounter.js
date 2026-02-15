import { useState } from "react";

export default function useCounter(init = 0) {
  const [v, setV] = useState(init);
  return {
    v,
    inc: () => setV(v + 1),
    dec: () => setV(v - 1),
    reset: () => setV(init),
  };
}
