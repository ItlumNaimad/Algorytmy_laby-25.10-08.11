#include <iostream>
using namespace std;
string wyraz;
int main() {
    cout<<"Podaj wyraz do sprawdzenia (zakoncz wpisywanie enterem):";
    getline(cin, wyraz);

    for (int i = 0; i < wyraz.length() / 2; i++)
    {
        if (wyraz[i] != wyraz[wyraz.length() - 1 - i])
        {
            cout<<"Wyraz \""<<wyraz<<"\" nie jest palindromem.";
            return 1;
        }
    }
    cout<<"Slowo \""<<wyraz<<"\" jest palindromem";
    return 0;
}
