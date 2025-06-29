# 🎯 Guesser Game in C++

## 📌 Overview

This is a simple console-based **Guesser Game** made in C++.  
The game includes:
- One **Guesser** who selects a number.
- Three **Players** who try to guess it.
- An **Umpire** who checks the guesses and announces the result.

This project is a basic example of **Object-Oriented Programming** in C++.

---

## 🧠 How the Game Works

1. The **Guesser** enters a secret number.
2. Three **Players** try to guess the number.
3. The **Umpire** collects all numbers and compares them.
4. It prints who guessed correctly.

---

## 🧱 Classes Used

| Class    | Description                                  |
|----------|----------------------------------------------|
| Guesser  | Takes the number to be guessed.              |
| Player   | Takes a number as player's guess.            |
| Umpire   | Handles the logic, comparisons, and results. |

---

## ▶️ How to Run

1. Save the code in a file named `guesser_game.cpp`
2. Compile and run:

```bash
g++ guesser_game.cpp -o game
./game
```

3. Enter the numbers when prompted.

---

## 💡 Sample Output

```
         Lets start the Game          
Give the number for the guesser : 
25
give the number for the player 1: 
24
give the number for the player 2: 
25
give the number for the player 3: 
23
the player 2 has won the game
      End Game       
```

---

## 📚 Concepts Used

- Classes and Objects
- Input/Output with `cin` and `cout`
- Conditional Logic (`if-else`)
- Object-Oriented Design

---

## ✅ Future Improvements

- Add input validation (only allow numbers).
- Make it multi-round (best of 3).
- Add a menu or scoring system.
- Convert to a GUI version with Qt or SFML.

---

## 📄 License

This is an open-source educational project.  
Feel free to modify and use it for learning or teaching.
