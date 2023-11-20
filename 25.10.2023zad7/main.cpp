#include <iostream>
using namespace std;
int liczba;
int main() {
    // Wprowadź liczbę
    cout << "Podaj liczbe: ";
    cin >> liczba;

    // Jeśli liczba jest mniejsza niż 2
    if (liczba < 2) {
        cout << "Podana liczba nie jest pierwsza" << endl;
        return 0;
    }
    // Sprawdź dzielniki od 2 do pierwiastka z liczby
    for (int i = 2; i * i <= liczba; i++) {
        if (liczba % i == 0) {
            // Znaleziono dzielnik, liczba nie jest pierwsza
            cout << "Podana liczba nie jest pierwsza" << endl;
            return 0;
        }
    }
    // Nie znaleziono dzielników, liczba jest pierwsza
    cout << "Podana liczba jest pierwsza" << endl;

    return 0;
}