#include "kerrostalo.h"

Kerrostalo::Kerrostalo()
{
    cout << "Kerrostalo luotu" << endl;
    cout << "Maaritellaan koko kerrostalon kaikki asunnot" << endl;
    eka = new Katutaso();
    toka = new Kerros();
    kolmas = new Kerros();
    eka->maaritaAsunnot();
    toka->maaritaAsunnot();
    kolmas->maaritaAsunnot();
}

double Kerrostalo::laskeKulutus(double hinta)
{
    double kulutus = eka->laskeKulutus(hinta) + toka->laskeKulutus(hinta) + kolmas->laskeKulutus(hinta);
    cout << "Kerrostalon kulutus kun hinta = " << hinta << " on " << kulutus << endl;
    return kulutus;
}

Kerrostalo::~Kerrostalo()
{
    //cout << "Kerrostalo destruktori" << endl;
}
