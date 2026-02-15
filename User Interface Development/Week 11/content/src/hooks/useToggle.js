// src/hooks/useToggle.js
import { useState } from "react";
export default () => {
  const [on, set] = useState(false);
  return [on, () => set(!on)];
};
