# Nim Game

## Overview

The Nim Game is a simple two-player mathematical strategy game where players take turns picking a certain number of items. The objective is to avoid being the player who reaches or exceeds the target number, as that player loses. This C++ program implements the game with customizable rules.

## How the Game Works

- The game starts with a target number, which the players will try to avoid.
- On each player's turn, they can pick a number between `1` and a defined maximum value.
- The running total accumulates with each player's pick.
- The player who causes the running total to exactly match the target number **loses** the game.

### Features

- **Customizable End Number**: The target number (end number) can be set by the user.
- **Customizable Max Pick**: Players can set the maximum number that can be picked per turn.
- **Turn-based**: The game alternates between two players, and keeps track of whose turn it is.

## How to Play

1. **Player Input**: 
   - The first player is prompted to pick a number between `1` and the maximum allowed.
   - The number is added to the running total.
   - The next player repeats the process.
   
2. **Invalid Input**: 
   - If a player chooses a number outside the allowed range, they are asked to input again.
   - If the selected number exceeds the target when added to the running total, the player is prompted to pick a smaller number.
   
3. **Winning Condition**: 
   - The game continues until the running total equals the target number. The player who makes this happen **loses**.

## Example Gameplay

```
########## WELCOME TO NIM GAME ##########

Enter the end number to reach: 15

Enter the maximum number a player can pick per turn: 3

Player 1, pick a number between 1 and 3: 2

Running number: 2

Player 2, pick a number between 1 and 3: 3

Running number: 5

...

Player 1, pick a number between 1 and 3: 3

Running number: 15

Player 1 loses!
```

## How to Compile and Run the Game

### Prerequisites
- A C++ compiler (e.g., `g++`)

### Steps to Run

1. Clone the repository or download the source code.
   ```
   git clone https://github.com/yourusername/nim-game.git
   ```
2. Navigate to the project directory.
   ```
   cd nim-game
   ```
3. Compile the C++ code.
   ```
   g++ nim_game.cpp -o nim_game
   ```
4. Run the compiled executable.
   ```
   ./nim_game
   ```

## Future Enhancements

- Add support for a more advanced AI opponent.
- Improve the user interface with a graphical representation.
- Include support for more than 2 players.

## Author

- **Avishek Sadhukhan** - [GitHub Profile](https://github.com/Jai-Baba-Coder)

