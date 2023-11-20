#include <iostream>
#include <string>
using namespace std;
int liczba_dec;
string liczba_bin;
char wybor;
string dec2bin(int decimal)
{
    string wynik;
    while (decimal != 0)
    {
        if (decimal % 2 == 1)
            wynik += '1';
        else
            wynik += '0';
        decimal /= 2;
    }
    string odwroconyTekst;
    for (int i = wynik.length() - 1; i >= 0; i--)
    {
        odwroconyTekst += wynik[i];
    }
    return odwroconyTekst + " bin";
}
int bin2dec(const string binary) {
    int result = 0;
    int potega = 1;

    for (int i = (int) binary.length() - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            result += potega;
        }
        potega = potega * 2;
    }

    return result;
}
int main()
{
        cout << "Wybierz opcje konwersji:\n1.Decymalna -> Binarna\n2.Binarna - > Decymalna" << endl;
        cin >> wybor;
        switch (wybor) {
            case '1':
                cout << "Podaj liczbe dziesietna do przekonwertowania:";
                cin >> liczba_dec;
                cout << "Liczba" << liczba_dec << " dec -> " << dec2bin(liczba_dec);
                break;
            case '2':
                cout << "Podaj liczbe dwojkowa do przekonwertowania:";
                cin >> liczba_bin;
                cout << "Liczba" << liczba_bin << " dec -> " << bin2dec(liczba_bin)<<" dec";
                break;
            default:
                cout << "Nie rozpoznana opcja. Zamknij program";
                break;
        }
        return 0;
}
