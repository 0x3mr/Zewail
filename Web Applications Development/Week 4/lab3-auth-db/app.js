const express = require('express');
const app = express();

app.use(express.json());

const authRoutes = require('./routes/authRoutes');
const videoRoutes = require('./routes/videoRoutes');

app.use('/api/auth', authRoutes);
app.use('/api/videos', videoRoutes);

module.exports = app;