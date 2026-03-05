const express = require('express');
const router = express.Router();

const videoController = require('../controllers/videoController');
const protect = require('../middleware/protect');

router.get('/', videoController.getAllVideos);
router.post('/', protect, videoController.createVideo);
router.delete('/:id', protect, videoController.deleteVideo);

module.exports = router;