require("dotenv").config();
const express = require("express");
const app = express();

// ── Middleware ──────────────────────────────────────────────
// JSON body parsing
app.use(express.json());

// Global logging middleware
app.use((req, res, next) => {
  console.log(`[${new Date().toISOString()}] ${req.method} ${req.url}`);
  next();
});

// ── Basic Routes ────────────────────────────────────────────
// Part 1 — GET /
app.get("/", (req, res) => {
  res.send("Welcome to the Express server!");
});

// Part 2 — GET /about
app.get("/about", (req, res) => {
  res.send("About page");
});

// ── Routers ─────────────────────────────────────────────────
const userRoutes = require("./routes/userRoutes");
const videoRoutes = require("./routes/videoRoutes");

app.use("/users", userRoutes);
app.use("/videos", videoRoutes);

// ── Error Handling ───────────────────────────────────────────
// 404 handler
app.use((req, res, next) => {
  res.status(404).json({ error: "Route not found" });
});

// Global error handler
app.use((err, req, res, next) => {
  console.error(err.stack);
  res.status(500).json({ error: "Internal Server Error" });
});

// ── Start Server ─────────────────────────────────────────────
const PORT = process.env.PORT || 3000;
app.listen(PORT, () => {
  console.log(`Server running on http://localhost:${PORT}`);
});