#include "italianchef.h"
#include <iostream>
#include <string>

using namespace std;

void ItalianChef::makePasta()
{
    cout << "Chef " << name << " makes pasta" << endl;
}

string ItalianChef::getName() { return name; }
