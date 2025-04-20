const gameContainer = document.querySelector(".game-container");
const fogLayer = document.getElementById("fogLayer");
const car = document.getElementById("car");
const aiCars = [
  document.getElementById("ai-car1"),
  document.getElementById("ai-car2"),
  document.getElementById("ai-car3"),
];
const obstacle = document.getElementById("obstacle");
const finishLine = document.getElementById("finish-line");
const speedElement = document.getElementById("speed");
const turboElement = document.getElementById("turbo");
const distanceElement = document.getElementById("distance");
const lapElement = document.getElementById("lap");
const scoreElement = document.getElementById("score");
const weatherElement = document.getElementById("weather");
const progressBar = document.getElementById("progress");

let position = 50,
  speed = 0,
  turbo = false,
  distance = 0,
  lap = 1,
  score = 0;
let aiPositions = [30, 50, 70];
let obstaclePosition = Math.random() * 100;
let crash = false;
let weather = "Sunny";

function createRain() {
  for (let i = 0; i < 50; i++) {
    const drop = document.createElement("div");
    drop.className = "rain-drop";
    drop.style.left = `${Math.random() * 100}%`;
    drop.style.animationDuration = `${Math.random() * 1 + 1}s`;
    gameContainer.appendChild(drop);
  }
}

function clearRain() {
  document.querySelectorAll(".rain-drop").forEach((e) => e.remove());
}

function updateWeather() {
  let roll = Math.random();
  if (roll < 0.33) {
    document.body.className = "rain";
    weather = "Rain";
    fogLayer.style.opacity = 0;
    clearRain();
    createRain();
  } else if (roll < 0.66) {
    document.body.className = "fog";
    weather = "Fog";
    fogLayer.style.opacity = 0.4;
    clearRain();
  } else {
    document.body.className = "";
    weather = "Sunny";
    fogLayer.style.opacity = 0;
    clearRain();
  }
}

function updateGame() {
  distance += speed / 10;
  if (distance >= 500) {
    lap++;
    score += Math.floor(Math.random() * 100 + 100);
    distance = 0;
    updateWeather();
  }

  if (turbo && speed < 320) speed += 3;
  else if (!turbo && speed > 0) speed -= 1;

  aiPositions = aiPositions.map((pos) =>
    pos < 100 ? pos + Math.random() * 2 : 0
  );
  obstaclePosition =
    obstaclePosition < 100 ? obstaclePosition + Math.random() * 1.5 : 0;

  car.style.left = `${position}%`;
  aiCars.forEach((ai, i) => (ai.style.left = `${aiPositions[i]}%`));
  obstacle.style.left = `${obstaclePosition}%`;
  finishLine.style.top = `${70 - (distance / 500) * 60}%`;

  progressBar.style.width = `${(distance / 500) * 100}%`;

  aiPositions.forEach((aiPos) => {
    if (
      (Math.abs(position - aiPos) < 5 ||
        Math.abs(position - obstaclePosition) < 5) &&
      speed > 100
    ) {
      crash = true;
      setTimeout(() => (crash = false), 1500);
      speed = 0;
    }
  });

  speedElement.textContent = speed;
  turboElement.textContent = turbo ? "ON" : "OFF";
  distanceElement.textContent = distance.toFixed(1);
  lapElement.textContent = lap;
  scoreElement.textContent = score;
  weatherElement.textContent = weather;
}

function handleKeyDown(e) {
  if (e.key === "ArrowLeft" && position > 0) position -= 5;
  if (e.key === "ArrowRight" && position < 100) position += 5;
  if (e.key === " " && !crash) turbo = true;
}

function handleKeyUp(e) {
  if (e.key === " ") turbo = false;
}

gameContainer.addEventListener("keydown", handleKeyDown);
gameContainer.addEventListener("keyup", handleKeyUp);
setInterval(updateGame, 100);
updateWeather();
