import { useState, useEffect, useRef } from "react";

const W = 340, H = 340, PAD = 40;

function toCanvas(x, y, xMin, xMax, yMin, yMax) {
  return [
    PAD + ((x - xMin) / (xMax - xMin)) * (W - 2 * PAD),
    H - PAD - ((y - yMin) / (yMax - yMin)) * (H - 2 * PAD),
  ];
}

function drawArrow(ctx, x1, y1, x2, y2, color) {
  ctx.strokeStyle = color;
  ctx.fillStyle = color;
  ctx.lineWidth = 2;
  ctx.beginPath();
  ctx.moveTo(x1, y1);
  ctx.lineTo(x2, y2);
  ctx.stroke();
  const angle = Math.atan2(y2 - y1, x2 - x1);
  ctx.beginPath();
  ctx.moveTo(x2, y2);
  ctx.lineTo(x2 - 8 * Math.cos(angle - 0.4), y2 - 8 * Math.sin(angle - 0.4));
  ctx.lineTo(x2 - 8 * Math.cos(angle + 0.4), y2 - 8 * Math.sin(angle + 0.4));
  ctx.closePath();
  ctx.fill();
}

function drawDiagram(canvas, mode) {
  const ctx = canvas.getContext("2d");
  ctx.clearRect(0, 0, W, H);

  const xMin = 0, xMax = 3, yMin = 0, yMax = 3;

  ctx.fillStyle = "#0f1117";
  ctx.fillRect(0, 0, W, H);

  ctx.strokeStyle = "#ffffff10";
  ctx.lineWidth = 1;
  for (let v = 0; v <= 3; v += 0.5) {
    const [x1, y1] = toCanvas(v, yMin, xMin, xMax, yMin, yMax);
    const [x2, y2] = toCanvas(v, yMax, xMin, xMax, yMin, yMax);
    ctx.beginPath(); ctx.moveTo(x1, y1); ctx.lineTo(x2, y2); ctx.stroke();
    const [xa, ya] = toCanvas(xMin, v, xMin, xMax, yMin, yMax);
    const [xb, yb] = toCanvas(xMax, v, xMin, xMax, yMin, yMax);
    ctx.beginPath(); ctx.moveTo(xa, ya); ctx.lineTo(xb, yb); ctx.stroke();
  }

  ctx.strokeStyle = "#ffffff40";
  ctx.lineWidth = 1.5;
  const [ax0, ay0] = toCanvas(xMin, 0, xMin, xMax, yMin, yMax);
  const [ax1, ay1] = toCanvas(xMax, 0, xMin, xMax, yMin, yMax);
  ctx.beginPath(); ctx.moveTo(ax0, ay0); ctx.lineTo(ax1, ay1); ctx.stroke();
  const [bx0, by0] = toCanvas(0, yMin, xMin, xMax, yMin, yMax);
  const [bx1, by1] = toCanvas(0, yMax, xMin, xMax, yMin, yMax);
  ctx.beginPath(); ctx.moveTo(bx0, by0); ctx.lineTo(bx1, by1); ctx.stroke();

  ctx.fillStyle = "#ffffff60";
  ctx.font = "12px monospace";
  ctx.fillText("x", ax1 - 10, ay1 + 15);
  ctx.fillText("y", bx1 + 8, by1 + 10);

  ctx.strokeStyle = "#4ade80";
  ctx.lineWidth = 2;
  ctx.setLineDash([6, 4]);
  ctx.beginPath();
  const [lx0, ly0] = toCanvas(xMin, xMin, xMin, xMax, yMin, yMax);
  const [lx1, ly1] = toCanvas(xMax, xMax, xMin, xMax, yMin, yMax);
  ctx.moveTo(lx0, ly0); ctx.lineTo(lx1, ly1); ctx.stroke();
  ctx.setLineDash([]);

  ctx.fillStyle = "#4ade80";
  ctx.font = "bold 12px monospace";
  ctx.fillText("y = x", lx1 - 40, ly1 + 16);

  let g, gLabel, fixedPoint;
  if (mode === "converge") {
    g = x => 0.5 * x + 0.75;
    gLabel = "g(x) = 0.5x + 0.75";
    fixedPoint = 1.5;
  } else {
    g = x => 1.8 * x - 0.8;
    gLabel = "g(x) = 1.8x - 0.8";
    fixedPoint = 1.0;
  }

  ctx.strokeStyle = "#f59e0b";
  ctx.lineWidth = 2.5;
  ctx.beginPath();
  let first = true;
  for (let x = xMin; x <= xMax; x += 0.01) {
    const y = g(x);
    if (y < yMin || y > yMax) { first = true; continue; }
    const [cx, cy] = toCanvas(x, y, xMin, xMax, yMin, yMax);
    first ? ctx.moveTo(cx, cy) : ctx.lineTo(cx, cy);
    first = false;
  }
  ctx.stroke();

  ctx.fillStyle = "#f59e0b";
  ctx.font = "bold 12px monospace";
  ctx.fillText(gLabel, PAD + 5, PAD + 20);

  const color = mode === "converge" ? "#60a5fa" : "#f87171";
  let x0 = mode === "converge" ? 0.3 : 0.6;
  const steps = mode === "converge" ? 6 : 4;

  const [sx, sy] = toCanvas(x0, 0, xMin, xMax, yMin, yMax);
  ctx.beginPath();
  ctx.arc(sx, sy, 4, 0, Math.PI * 2);
  ctx.fillStyle = color;
  ctx.fill();
  ctx.fillStyle = color;
  ctx.font = "11px monospace";
  ctx.fillText("x₀", sx - 4, sy + 16);

  let xCur = x0;
  for (let i = 0; i < steps; i++) {
    const yNew = g(xCur);
    if (yNew < yMin || yNew > yMax || xCur < xMin || xCur > xMax) break;
    const [vx1, vy1] = toCanvas(xCur, xCur, xMin, xMax, yMin, yMax);
    const [vx2, vy2] = toCanvas(xCur, yNew, xMin, xMax, yMin, yMax);
    drawArrow(ctx, vx1, vy1, vx2, vy2, color);
    const [hx1, hy1] = toCanvas(xCur, yNew, xMin, xMax, yMin, yMax);
    const [hx2, hy2] = toCanvas(yNew, yNew, xMin, xMax, yMin, yMax);
    drawArrow(ctx, hx1, hy1, hx2, hy2, color);
    xCur = yNew;
  }

  const [fpx, fpy] = toCanvas(fixedPoint, fixedPoint, xMin, xMax, yMin, yMax);
  ctx.beginPath();
  ctx.arc(fpx, fpy, 6, 0, Math.PI * 2);
  ctx.fillStyle = mode === "converge" ? "#4ade80" : "#f87171";
  ctx.fill();
  ctx.strokeStyle = "#fff";
  ctx.lineWidth = 1.5;
  ctx.stroke();
  ctx.fillStyle = "#fff";
  ctx.font = "bold 12px monospace";
  ctx.fillText("x*", fpx + 8, fpy - 6);

  ctx.fillStyle = mode === "converge" ? "#4ade8099" : "#f8717199";
  ctx.font = "11px monospace";
  ctx.fillText(mode === "converge" ? "|g'(x)| = 0.5 < 1  ✓" : "|g'(x)| = 1.8 > 1  ✗", PAD, H - 12);
}

export default function App() {
  const convRef = useRef(null);
  const divRef = useRef(null);

  useEffect(() => {
    if (convRef.current) drawDiagram(convRef.current, "converge");
    if (divRef.current) drawDiagram(divRef.current, "diverge");
  }, []);

  return (
    <div style={{
      background: "#0f1117",
      minHeight: "100vh",
      width: "100vw",
      boxSizing: "border-box",
      display: "flex",
      flexDirection: "column",
      alignItems: "center",
      justifyContent: "center",
      fontFamily: "monospace",
      padding: "24px",
      gap: "32px",
      margin: 0,
    }}>

      {/* reset any default margin/padding */}
      <style>{`* { margin: 0; padding: 0; box-sizing: border-box; } body { background: #0f1117; }`}</style>

      <h1 style={{ color: "#fff", fontSize: "18px", letterSpacing: "0.1em" }}>
        Fixed-Point Iteration
      </h1>

      <div style={{
        display: "flex",
        gap: "32px",
        flexWrap: "wrap",
        justifyContent: "center",
        width: "100%",
      }}>
        {[
          { ref: convRef, mode: "converge", label: "CONVERGENCE", color: "#4ade80", stepColor: "#60a5fa", desc: ["Iterations spiral ", "inward", " → x* reached"], cond: "|g′(x)| < 1" },
          { ref: divRef,  mode: "diverge",  label: "DIVERGENCE",  color: "#f87171", stepColor: "#f87171", desc: ["Iterations staircase ", "outward", " → escapes"],  cond: "|g′(x)| > 1" },
        ].map(({ ref, label, color, stepColor, desc, cond }) => (
          <div key={label} style={{ display: "flex", flexDirection: "column", alignItems: "center", gap: "12px" }}>
            <div style={{ color, fontSize: "14px", fontWeight: "bold", letterSpacing: "0.08em" }}>{label}</div>
            <canvas ref={ref} width={W} height={H}
              style={{ borderRadius: "12px", border: "1px solid #ffffff15" }} />
            <div style={{
              background: "#ffffff08", borderRadius: "8px", padding: "10px 16px",
              color: "#ffffff90", fontSize: "12px", lineHeight: "1.7", textAlign: "center"
            }}>
              {desc[0]}<span style={{ color: stepColor }}>{desc[1]}</span>{desc[2]}<br />
              Condition: <span style={{ color }}>{cond}</span>
            </div>
          </div>
        ))}
      </div>

      {/* Legend */}
      <div style={{ display: "flex", gap: "24px", flexWrap: "wrap", justifyContent: "center" }}>
        {[
          { color: "#4ade80", label: "y = x  (fixed point line)",        dash: true  },
          { color: "#f59e0b", label: "y = g(x)  (iteration function)",   dash: false },
          { color: "#60a5fa", label: "iteration steps (converge)",        dash: false },
          { color: "#f87171", label: "iteration steps (diverge)",         dash: false },
        ].map(({ color, label, dash }) => (
          <div key={label} style={{ display: "flex", alignItems: "center", gap: "8px" }}>
            <div style={{
              width: "28px", height: "2px",
              borderTop: dash ? `2px dashed ${color}` : `2px solid ${color}`,
            }} />
            <span style={{ color: "#ffffff70", fontSize: "11px" }}>{label}</span>
          </div>
        ))}
      </div>
    </div>
  );
}