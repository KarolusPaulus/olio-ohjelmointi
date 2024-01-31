#include "italianchef.h"
#include <iostream>
#include <string>

using namespace std;

void ItalianChef::makePasta(int vesi, int jauhot)
{
    cout << "Chef " << name << " makes pasta with special recipe" << endl;
    cout << "Chef " << name << " uses jauhot = " << jauhot << endl;
    cout << "Chef " << name << " uses vesi = " << vesi << endl;
    this->vesi = vesi;
    this->jauhot = jauhot;
}

string ItalianChef::getName() { return name; }
