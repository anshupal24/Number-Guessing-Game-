#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // Step 1: Choose a game type -> Guessing Game
    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have selected a number between 1 and 100." << endl;
    cout << "Can you guess what it is?" << endl;

    // Step 2: Define the game rules and logic
    srand(time(0));  // Seed random number generator
    int secretNumber = rand() % 100 + 1; // Random number between 1 and 100
    int guess;
    int attempts = 0;
    bool guessedCorrectly = false;

    // Step 3: Use conditional statements to manage game flow
    while (!guessedCorrectly) {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess == secretNumber) {
            cout << "Congratulations! You guessed the number in " 
                 << attempts << " attempts." << endl;
            guessedCorrectly = true;
        } else if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Too high! Try again." << endl;
        }
    }

    // Step 4: Game ends automatically after correct guess
    cout << "Game Over. Thanks for playing!" << endl;

    return 0;
}
