#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include <string>
#include "chef.h"

using namespace std;

class ItalianChef : public Chef
{
public:
    using Chef::Chef;
    void makePasta();
    string getName();
private:

};

#endif // ITALIANCHEF_H
