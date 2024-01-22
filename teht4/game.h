#ifndef GAME_H
#define GAME_H
#include <iostream>

class game
{
public:
    int a;
    game(int);
    ~game();
    void play();

private:
    int randomNumber;
    int playerGuess;
    int maxNumber;
    int numOfGuesses;
    void printGameResult();
};

#endif // GAME_H
