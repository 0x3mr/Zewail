// GET /users/:id
const getUser = (req, res) => {
  const { id } = req.params;
  res.json({ message: `User with ID: ${id}` });
};

// POST /users
const createUser = (req, res) => {
  const { name, email } = req.body;
  res.status(201).json({ message: "User created", user: { name, email } });
};

module.exports = { getUser, createUser };