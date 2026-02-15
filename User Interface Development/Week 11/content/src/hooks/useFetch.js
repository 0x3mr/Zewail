// src/hooks/useFetch.js
import { useEffect, useState } from "react";

export default function useFetch(url) {
  const [data, setData] = useState([]);
  useEffect(() => {
    fetch(url).then(r => r.json()).then(setData);
  }, [url]);
  return data;
}
