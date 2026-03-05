const express = require("express");
const router = express.Router();
const { getUser, createUser } = require("../controllers/userController");

// Authentication middleware (route-level)
const authMiddleware = (req, res, next) => {
  const authHeader = req.headers["authorization"];
  if (!authHeader || authHeader !== "Bearer mysecrettoken") {
    return res.status(401).json({ error: "Unauthorized" });
  }
  next();
};

// GET /users/:id  — protected route
router.get("/:id", authMiddleware, getUser);

// POST /users
router.post("/", createUser);

module.exports = router;