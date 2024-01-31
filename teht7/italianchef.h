#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include <string>
#include "chef.h"

using namespace std;

class ItalianChef : public Chef
{
public:
    int vesi;
    int jauhot;
    using Chef::Chef;
    void makePasta(int, int);
    string getName();
private:

};

#endif // ITALIANCHEF_H
