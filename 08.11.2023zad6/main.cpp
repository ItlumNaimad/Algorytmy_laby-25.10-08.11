#include <iostream>
using namespace std;
string pesel;
const int wagi[] = {1, 3, 7, 9, 1, 3, 7, 9, 1, 3, 1};
int sum = 0;
int main() {
    cout<<"Podaj numer PESEL do sprawdzenia czy jest prawdziwy: ";
    getline(cin,pesel);
    if (pesel.length() != 11)
    {
        cout<<"Falszywy pesel!";
        return 1;
    }

    for (int i = 0; i < 11; i++)
    {
        int number = pesel[i] - '0';
        sum += number * wagi[i];
    }
    if (sum % 10 == 0)
    {
        cout<<"Ten pesel jest prawdziwy.";
    } else
    {
        cout<<"Falszywy pesel!";
    }
    return 0;
}
