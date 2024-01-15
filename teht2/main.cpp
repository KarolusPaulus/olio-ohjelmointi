#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int function();

int main() {

    function();
    return 0;
}

int function() {

    srand(time(NULL));

    int etsittavaLuku = rand() % 20 + 1;
    int pelaajanArvaus;

    do {
        std::cout << "Arvaa luku valilta 1-20: ";
        std::cin >> pelaajanArvaus;

        if (pelaajanArvaus < etsittavaLuku) {
            std::cout << "Luku on suurempi." << std::endl;
        } else if (pelaajanArvaus > etsittavaLuku) {
            std::cout << "Luku on pienempi." << std::endl;
        } else {
            std::cout << "Oikein! Onneksi olkoon." << std::endl;
        }

    } while (pelaajanArvaus != etsittavaLuku);

    return 0;
}
