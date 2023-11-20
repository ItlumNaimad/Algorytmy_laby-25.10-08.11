#include <iostream>

using namespace std;

string dec2hex(int n)
{
    string liczba_hex;
    while (n > 0) {
        int rest = n % 16;
        char ch;

        if (rest < 10) {
            ch = (char) ('0' + rest);
        } else {
            ch = (char) ('A' + (rest - 10));
        }

        liczba_hex += ch;
        n = n / 16;
    }

    return liczba_hex;
}

int hex2dec(const string hexadec) {
    int liczba_dec = 0;
    int potega = 1;

    for (int i = (int) hexadec.length() - 1; i >= 0; i--)
    {
        char ch = (char) std::toupper(hexadec[i]);
        int value = 0;

        if (std::isdigit(ch)) {
            value = ch - '0';
        } else if (ch >= 'A' && ch <= 'F') {
            value = 10 + (ch - 'A');
        }

        liczba_dec += value * potega;
        potega *= 16;
    }

    return liczba_dec;
}

int liczba_dec;
string liczba_hex;
char wybor;

int main() {
    cout << "Wybierz opcje konwersji:\n1.Decymalna -> Hekxadecymalna\n2.Hekxadecymalna - > Decymalna" << endl;
    cin >> wybor;
    switch (wybor) {
        case '1':
            cout << "Podaj liczbe dziesietna do przekonwertowania:";
            cin >> liczba_dec;
            cout << "Liczba" << liczba_dec << " dec -> " << dec2hex(liczba_dec)<<" hex";
            break;
        case '2':
            cout << "Podaj liczbe dwojkowa do przekonwertowania:";
            cin >> liczba_hex;
            cout << "Liczba" << liczba_hex << " hex -> " << hex2dec(liczba_hex)<<" dec";
            break;
        default:
            cout << "Nie rozpoznana opcja. Zamknij program";
            break;
    }
    return 0;
}
