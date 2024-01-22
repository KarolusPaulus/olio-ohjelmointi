#include "game.h"

using namespace std;

game::game(int a)
{
    maxNumber = a;

    cout << "GAME CONSTRUCTOR: object initialized with " << a << " as a maximum value" << endl;
}

game::~game()
{
    cout << "GAME DESTRUCTOR: object cleared from stack memory" << endl;
}

void game::printGameResult()
{
    cout << playerGuess << " is right!" << endl;
    cout << "You guessed the right number " << playerGuess << " with " << numOfGuesses << " guesses" << endl;
}

void game::play()
{
    srand(time(NULL));

    randomNumber = rand() % maxNumber + 1;
    numOfGuesses = 0;

    do {
        cout << "Guess number between 1-" << maxNumber << ": ";
        cin >> playerGuess;
        numOfGuesses++;

        if (playerGuess < randomNumber) {
            cout << "Your guess is too small" << endl;
        } else if (playerGuess > randomNumber) {
            cout << "Your guess is too big" << endl;
        } else {
            printGameResult();
        }

    } while (playerGuess != randomNumber);
}
