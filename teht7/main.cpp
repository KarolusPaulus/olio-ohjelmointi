#include <iostream>
#include <string>
//#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    ItalianChef Mario = ItalianChef("Mario");
    Mario.makePasta(100, 250);

    return 0;
}
