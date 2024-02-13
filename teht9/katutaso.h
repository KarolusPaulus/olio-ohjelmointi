#ifndef KATUTASO_H
#define KATUTASO_H
#include <iostream>
#include "kerros.h"

using namespace std;

class Katutaso : public Kerros
{
public:
    Katutaso();
    void maaritaAsunnot();
    double laskeKulutus(double);
private:
    Asunto *ask1;
    Asunto *ask2;
};

#endif // KATUTASO_H
