#include <iostream>
#include <cstdlib>
#include <ctime>
int propozycja, liczbaProb = 0;
using namespace std;

int main() {
    // Inicjalizacja generatora liczb pseudolosowych
    srand(time(nullptr));
    // Wylosowanie liczby z zakresu ⟨1,15⟩
    int odgadywana = rand() % 15 + 1;
    cout << "Zgadnij liczbe z zakresu od 1 do 15." << endl;

    do {
        // Pobranie propozycji od użytkownika
        cout << "Twoja propozycja: ";
        cin >> propozycja;

        // Zliczanie prób
        liczbaProb++;

        // Sprawdzenie, czy propozycja jest równa, mniejsza lub większa od liczby do odgadnięcia
        if (propozycja == odgadywana) {
            cout << "Brawo! Odgadles liczbe " << odgadywana << " po " << liczbaProb << " probach." << endl;
        } else if (propozycja < odgadywana) {
            cout << "Szukana liczba jest wieksza. Sprobuj ponownie." << endl;
        } else {
            cout << "Szukana liczba jest mniejsza. Sprobuj ponownie." << endl;
        }

    } while (propozycja != odgadywana);

    return 0;
}
