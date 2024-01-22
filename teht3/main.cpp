#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int game(int max);

int main() {

    int guesses = game(40);

    cout << "Pelaajalla meni " << guesses << " arvausta." << endl;

    return 0;
}

int game(int max) {
    srand(time(NULL));

    int etsittavaLuku = rand() % max + 1;
    int pelaajanArvaus;
    int arvaustenMaara = 0;

    do {
        cout << "Arvaa luku valilta 1-" << max << ": ";
        cin >> pelaajanArvaus;
        arvaustenMaara++;

        if (pelaajanArvaus < etsittavaLuku) {
            cout << "Luku on suurempi" << endl;
        } else if (pelaajanArvaus > etsittavaLuku) {
            cout << "Luku on pienempi" << endl;
        } else {
            cout << "Oikein! Onneksi olkoon!" << endl;
        }

    } while (pelaajanArvaus != etsittavaLuku);

    return arvaustenMaara;
}
