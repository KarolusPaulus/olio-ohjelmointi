#ifndef CHEF_H
#define CHEF_H
#include <string>

using namespace std;

class Chef
{
public:
    string name;
    Chef(string);
    ~Chef();
    void makeSalad(void);
    void makeSoup(void);
private:

};

#endif // CHEF_H
