const express = require('express');
const router = express.Router();

const authController = require('../controllers/authController');
const protect = require('../middleware/protect');
const restrictTo = require('../middleware/restrictTo');

router.post('/signup', authController.signup);
router.post('/login', authController.login);

// Protected route — any logged in user
router.get('/me', protect, authController.getMe);

// Admin only route
router.delete('/users/:id', protect, restrictTo('admin'), authController.deleteUser);

module.exports = router;