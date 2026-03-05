const Video = require('../models/videoModel');

// GET /videos — public
exports.getAllVideos = async (req, res) => {
  try {
    const videos = await Video.find().populate('user', 'name email');
    res.status(200).json({ status: 'success', data: { videos } });
  } catch (err) {
    res.status(400).json({ status: 'fail', message: err.message });
  }
};

// POST /videos — protected
exports.createVideo = async (req, res) => {
  try {
    const { title, description } = req.body;
    const video = await Video.create({ title, description, user: req.user._id });
    res.status(201).json({ status: 'success', data: { video } });
  } catch (err) {
    res.status(400).json({ status: 'fail', message: err.message });
  }
};

// DELETE /videos/:id — owner or admin
exports.deleteVideo = async (req, res) => {
  try {
    const video = await Video.findById(req.params.id);

    if (!video)
      return res.status(404).json({ message: 'Video not found' });

    const isOwner = video.user.toString() === req.user._id.toString();
    const isAdmin = req.user.role === 'admin';

    if (!isOwner && !isAdmin)
      return res.status(403).json({ message: 'You do not have permission to delete this video' });

    await Video.findByIdAndDelete(req.params.id);
    res.status(204).json({ status: 'success', data: null });
  } catch (err) {
    res.status(400).json({ status: 'fail', message: err.message });
  }
};