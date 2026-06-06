# 🎯 Guess The Number

A classic terminal-based number guessing game written in C++ with ASCII art banner and input validation.

![C++](https://img.shields.io/badge/C++-17-blue?style=flat&logo=c%2B%2B)
![License](https://img.shields.io/badge/License-MIT-green?style=flat)
![Platform](https://img.shields.io/badge/Platform-Windows%20%7C%20Linux%20%7C%20macOS-lightgrey?style=flat)

---

## 📖 About

The game picks a random number between **1 and 100** and challenges you to find it. After each guess, you get a **Too High** or **Too Low** hint until you nail it. Your total attempts are shown when you win.

---

## ✨ Features

- 🎲 Random number generation seeded with system time
- 🔼🔽 Higher / Lower hints after every guess
- ✅ Input validation — handles non-numeric entries gracefully
- 🏆 Attempt counter displayed on win
- 🖼️ ASCII art title banner

---

## 🚀 Getting Started

### Prerequisites

- A C++ compiler supporting **C++11 or later** (GCC, Clang, MSVC)

### Build & Run

```bash
# Clone the repo
git clone https://github.com/your-username/guess-the-number.git
cd guess-the-number

# Compile
g++ -std=c++11 -o guess main.cpp

# Run
./guess          # Linux / macOS
guess.exe        # Windows
```

---

## 🎮 How to Play

1. Run the executable.
2. The program picks a secret number between 1 and 100.
3. Type your guess and press **Enter**.
4. Follow the hints until you guess correctly.
5. Your attempt count is revealed on success!

---

## 📁 Project Structure

```
guess-the-number/
├── main.cpp          # Game source code
├── README.md
├── CONTRIBUTING.md
└── LICENSE
```

---

## 🤝 Contributing

Contributions are welcome! See [CONTRIBUTING.md](CONTRIBUTING.md) for guidelines.

---

## 📄 License

This project is licensed under the **MIT License** — see [LICENSE](LICENSE) for details.
