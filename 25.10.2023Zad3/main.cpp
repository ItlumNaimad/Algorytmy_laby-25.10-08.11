#include <iostream>
using namespace std;
int n;
int a = 0, b = 1;
int main() {

    cout << "Podaj ile elementow ciagu Fibonacciego chcesz wygenerowac:";
    cin >> n;

    if (n >= 1) cout << a << " ";
    if (n >= 2) cout << b << " ";

    for (int i = 3; i <= n; i++) {
        int c = a + b; // Obliczanie kolejnego elementu ciągu
        cout << c << " ";
        a = b;
        b = c;
    }
    return 0;
}
