#include <iostream>
#include "kerrostalo.h"

using namespace std;

int main()
{
    Kerrostalo *k = new Kerrostalo();
    k->laskeKulutus(1);

    delete k;

    return 0;
}
