#include <iostream>
#include <string>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    Chef Jyrki = Chef("Jyrki");

    ItalianChef Mario = ItalianChef("Mario");

    Jyrki.makeSalad();
    Mario.makePasta();
    Jyrki.makeSoup();

    return 0;
}
