#ifndef KERROS_H
#define KERROS_H
#include <iostream>
#include "asunto.h"

using namespace std;

class Kerros
{
public:
    Kerros();
    virtual double laskeKulutus(double);
    virtual void maaritaAsunnot();
private:
    Asunto *as1;
    Asunto *as2;
    Asunto *as3;
    Asunto *as4;
};

#endif // KERROS_H
