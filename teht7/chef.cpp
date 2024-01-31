#include "chef.h"
#include <iostream>
#include <string>

using namespace std;

Chef::Chef(string name)
{
    cout << "Chef " << name << " konstruktori" << endl;
    this->name = name;
}

void Chef::makeSalad()
{
    cout << "Chef " << name << " makes salad" << endl;
}

void Chef::makeSoup()
{
    cout << "Chef " << name << " makes soup" << endl;
}

Chef::~Chef()
{
    cout << "Chef " << name << " destruktori" << endl;
}
