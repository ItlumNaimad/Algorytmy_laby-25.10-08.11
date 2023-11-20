#include <iostream>
#include <cmath>
using namespace std;
double a, b, c;
int main() {

    cout << "Podaj dlugosc boku a:";
    cin >> a;
    cout << "Podaj dlugosc boku b:";
    cin >> b;
    cout << "Podaj dlugosc boku c:";
    cin >> c;

    if (a + b > c && a + c > b && b + c > a)
    {
        cout << "Z tych bokow mozna ulozyc trojkat" << endl;

        double obwod_trojkata = a + b + c;
        double d = 0.5 * obwod_trojkata;
        double powierzchnia = sqrt(d * (d - a) * (d - b) * (d - c));
        cout << "Obwod: " << obwod_trojkata << endl;
        cout << "Pole: " << powierzchnia << endl;
    } else
    {
        cout << "Z tych bokow nie moze byc uformowany trojkat." << endl;
    }
    return 0;
}
