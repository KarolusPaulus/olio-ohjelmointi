#include <iostream>
#include <string>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    Chef Gordon = Chef("Gordon Ramsay");
    Gordon.makeSalad();
    Gordon.makeSoup();

    ItalianChef Anthony = ItalianChef("Anthony Bourdain");
    Anthony.makeSalad();
    Anthony.makeSoup();

    return 0;
}
