# 🏓 Pong Game (C++ | SFML)

A classic Pong-style game built using C++ and the SFML graphics library. The game features real-time paddle movement, ball physics, scoring system, and lives tracking.

---

## 🚀 Features

* 🎮 Smooth paddle movement (Left & Right controls)
* ⚡ Real-time ball physics and collision detection
* 🧮 Score tracking system
* ❤️ Lives system (Game over after lives end)
* 🖥️ Full-screen gameplay experience (1920x1080)
* 🎥 Demo video available

---

## 🛠️ Tech Stack

* **Language:** C++
* **Graphics Library:** SFML (Simple and Fast Multimedia Library)
* **Concepts Used:**

  * Object-Oriented Programming (OOP)
  * Game Loop
  * Collision Detection
  * Event Handling

---

## 🎮 Controls

| Key            | Action            |
| -------------- | ----------------- |
| ⬅️ Left Arrow  | Move paddle left  |
| ➡️ Right Arrow | Move paddle right |
| Esc            | Exit game         |

---

## 📂 Project Structure

pong-game/
│
├── pong.cpp          # Main game loop
├── Ball.cpp / .h     # Ball logic
├── bat.cpp / .h      # Paddle logic
├── font/             # Game font
├── demo.webm         # Demo gameplay video (optional)
└── README.md

---

## ▶️ How to Run

### 1. Install SFML

Make sure SFML is installed on your system.

### 2. Compile the code

g++ pong.cpp Ball.cpp bat.cpp -o pong -lsfml-graphics -lsfml-window -lsfml-system

### 3. Run the game

./pong

---

## 🎥 Demo

👉 Watch the gameplay demo here:
[Watch Demo](https://drive.google.com/file/d/1bCfTYowqLmFZC3j72RE4DZOdgMEwDstX/view?usp=drive_link)

---

## 📈 Learning Outcomes

* Built a complete game using C++
* Learned real-time rendering with SFML
* Implemented collision detection and basic physics
* Improved understanding of game loops and event handling

---

## 🙌 Future Improvements

* Add sound effects 🎵
* Add levels or increasing difficulty
* Multiplayer mode 🧑‍🤝‍🧑
* Better UI and animations

---

## 👩‍💻 Author

* Archita Sen
