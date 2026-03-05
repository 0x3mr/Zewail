// In-memory videos array
let videos = [
  { id: 1, title: "Intro to Express", duration: "10:00" },
  { id: 2, title: "REST APIs", duration: "15:00" },
];
let nextId = 3;

// GET /videos
const getAllVideos = (req, res) => {
  res.json(videos);
};

// POST /videos
const createVideo = (req, res) => {
  const { title, duration } = req.body;
  const newVideo = { id: nextId++, title, duration };
  videos.push(newVideo);
  res.status(201).json(newVideo);
};

// GET /videos/:id
const getVideoById = (req, res) => {
  const video = videos.find((v) => v.id === parseInt(req.params.id));
  if (!video) return res.status(404).json({ error: "Video not found" });
  res.json(video);
};

// DELETE /videos/:id
const deleteVideo = (req, res) => {
  const index = videos.findIndex((v) => v.id === parseInt(req.params.id));
  if (index === -1) return res.status(404).json({ error: "Video not found" });
  const deleted = videos.splice(index, 1);
  res.json({ message: "Video deleted", video: deleted[0] });
};

module.exports = { getAllVideos, createVideo, getVideoById, deleteVideo };