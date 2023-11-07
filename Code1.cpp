#include <iostream>
#include <ctime>
#include <cstdlib>

int main() {
    // Seed the random number generator with the current time
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    int lowerBound = 1;
    int upperBound = 100;
    int randomNumber = (std::rand() % (upperBound - lowerBound + 1)) + lowerBound;
    int userGuess;
    int attempts = 0;

    std::cout << "Welcome to the Number Guessing Game!" << std::endl;
    std::cout << "I've selected a random number between " << lowerBound << " and " << upperBound << ". Try to guess it." << std::endl;

    do {
        std::cout << "Enter your guess: ";
        std::cin >> userGuess;
        attempts++;

        if (userGuess < lowerBound || userGuess > upperBound) {
            std::cout << "Your guess is out of bounds. Please guess between " << lowerBound << " and " << upperBound << "." << std::endl;
        } else if (userGuess < randomNumber) {
            std::cout << "Too low! Try again." << std::endl;
        } else if (userGuess > randomNumber) {
            std::cout << "Too high! Try again." << std::endl;
        }
    } while (userGuess != randomNumber);

    std::cout << "Congratulations! You guessed the correct number (" << randomNumber << ") in " << attempts << " attempts." << std::endl;

    return 0;
}
