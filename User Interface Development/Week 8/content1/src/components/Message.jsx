function Message({ text, color }) {
  return (
    <p style={{ color: color, fontWeight: 'bold' }}>
      {text}
    </p>
  );
}

export default Message;
