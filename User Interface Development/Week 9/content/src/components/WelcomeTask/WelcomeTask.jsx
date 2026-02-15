import { useState } from "react";

export default function WelcomeTask() {
  const [isVisible, setIsVisible] = useState(false);

  return (
    <div>
      <button onClick={() => setIsVisible(!isVisible)}>
        Toggle
      </button>

      {isVisible
        ? <p>Hello! This text is conditionally rendered.</p>
        : <p>Hidden – click the button to show.</p>
      }
    </div>
  );
}
