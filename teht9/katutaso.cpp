#include "katutaso.h"

Katutaso::Katutaso()
{
    cout << "Katutaso luotu" << endl;
    ask1 = new Asunto();
    ask2 = new Asunto();
}

void Katutaso::maaritaAsunnot()
{
    cout << "Maaritetaan 2kpl katutason asuntoja" << endl;
    ask1->maarita(2, 100);
    ask2->maarita(2, 100);
    cout << "Maaritetaan katutason kerrokselta perittyja asuntoja" << endl;
    Kerros::maaritaAsunnot();
}

double Katutaso::laskeKulutus(double hinta)
{
    double kulutus = ask1->laskeKulutus(hinta) + ask2->laskeKulutus(hinta) + Kerros::laskeKulutus(hinta);
    cout << "Katutason kulutus kun hinta = " << hinta << " on " << kulutus << endl;
    return kulutus;
}
