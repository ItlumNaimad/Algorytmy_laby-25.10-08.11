#include <iostream>

using namespace std;

int main() {
    double a1, b1, c1, a2, b2, c2;

    // Wprowadzenie współczynników równań
    cout << "Podaj wspolczynniki pierwszego rownania (a1, b1, c1): ";
    //cin >> a1 >> b1 >> c1;
    a1=3; b1=-1; c1=1;
    cout << "Podaj wspolczynniki drugiego rownania (a2, b2, c2): ";
   // cin >> a2 >> b2 >> c2;
    a2=1; b2=2; c2=5;
    // Obliczenie wyznaczników
    double delta = a1 * b2 - a2 * b1;
    double delta_x = c1 * b2 - c2 * b1;
    double delta_y = a1 * c2 - a2 * c1;

    // Sprawdzenie typu układu
    if (delta != 0) {
        // Układ jest oznaczony, istnieje jedno rozwiązanie
        double x = delta_x / delta;
        double y = delta_y / delta;
        cout << "Uklad jest oznaczony. Rozwiazania: x = " << x << ", y = " << y << endl;
    } else if (delta_x == 0 && delta_y == 0) {
        // Układ jest nieoznaczony, istnieje nieskończenie wiele rozwiązań
        cout << "Uklad jest nieoznaczony. Nieskonczenie wiele rozwiazan." << endl;
    } else {
        // Układ jest sprzeczny, nie istnieje żadne rozwiązanie
        cout << "Uklad jest sprzeczny. Brak rozwiazan." << endl;
    }

    return 0;
}
