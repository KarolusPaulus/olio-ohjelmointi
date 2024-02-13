#ifndef KERROSTALO_H
#define KERROSTALO_H
#include <iostream>
#include "katutaso.h"
#include "kerros.h"

using namespace std;

class Kerrostalo
{
public:
    Kerrostalo();
    ~Kerrostalo();
    double laskeKulutus(double);
private:
    Katutaso *eka;
    Kerros *toka;
    Kerros *kolmas;
};

#endif // KERROSTALO_H
