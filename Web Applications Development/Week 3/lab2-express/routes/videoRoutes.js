const express = require("express");
const router = express.Router();
const {
  getAllVideos,
  createVideo,
  getVideoById,
  deleteVideo,
} = require("../controllers/videoController");

router.get("/", getAllVideos);
router.post("/", createVideo);
router.get("/:id", getVideoById);
router.delete("/:id", deleteVideo);

module.exports = router;