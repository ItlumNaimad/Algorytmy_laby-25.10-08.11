#include <iostream>
using namespace std;
double suma_wag = 0, suma_liczb = 0 ;
int n;
int main() {
    cout << "Ile ma byc liczb do obliczenia sredniej wazonej? :";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        double zastepcza_nr, zastepcza_waga;

        cout << "Liczba nr " << i << ":";
        cin >> zastepcza_nr;

        cout << "Waga liczby nr " << i << ":";
        cin >> zastepcza_waga;

        suma_liczb += zastepcza_nr * zastepcza_waga;
        suma_wag += zastepcza_waga;
    }
    // srednia wazona = suma wszystkich liczb podzielona przez sume wag tych liczb
    double srednia_waz = suma_liczb / suma_wag;

    cout << "Srednia wazona liczb = " << srednia_waz << endl;
    return 0;
}
