#include <iostream>

using namespace std;

int main() {
    float a, b, suma, roznica, iloczyn, iloraz;
    // Wprowadzenie liczb od użytkownika
    cout<<"Podaj pierwsza liczbe a: ";
    cin>>a;
    cout<<"Podaj druga liczbe b: ";
    cin>>b;
    // Zabezpieczenie przed dzieleniem przez zero
    if (b==0)
    {
        cout << "Blad: Dzielenie przez zero.\n";
        return 1; // Zakończenie programu z kodem błędu
    }
    // Obliczenia
    suma = a + b;
    roznica = a - b;
    iloczyn = a * b;
    iloraz = a / b;
    // Wyświetlenie wyników
    cout<<"Suma a+b="<<suma<<endl;
    cout<<"Roznica a-b="<<roznica <<endl;
    cout<<"Iloczyn a*b="<<iloczyn<<endl;
    cout<<"Iloraz a/b="<<iloraz<<endl;

    return 0;
}
