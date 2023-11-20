#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int dimensions, determinant = 0;

int main()
{
    cout << "Podaj wymiary wiersza i kolumny macierzy:";
    cin >> dimensions;
    srand(time(nullptr));

    // Deklaracja i inicjalizacja macierzy
    int array1[dimensions][dimensions];
    int array2[dimensions][dimensions];
    int result[10][10];
    //zapełnianie wartościami pierwszą macierz
    for (int i = 0; i < dimensions; i++)
    {
        for (int j = 0; j < dimensions; j++)
        {
            cout << "[" << i << "][" << j << "]=";
            array1[i][j] = rand() % 10 + 1;
            cout << array1[i][j] << endl;
        }
        cout << endl;
    }
    //zapełnanie drugiej macierzy

    for (int i = 0; i < dimensions; i++)
    {
        for (int j = 0; j < dimensions; j++)
        {
            cout << "[" << i << "][" << j << "]=";
            array2[i][j] = rand() % 10 + 1;
            cout << array2[i][j] << endl;
        }
        cout << endl;
    }
    // Wyświetlenie pierwszej macierzy
    for (int i = 0; i < dimensions; i++)
    {
        for (int j = 0; j < dimensions; j++)
        {
            cout << "|" << array1[i][j] << "|";
        }
        cout << endl;
    }
    cout << endl;
    //Wyświetlenie drugiej macierzy
    for (int i = 0; i < dimensions; i++)
    {
        for (int j = 0; j < dimensions; j++)
        {
            cout << "|" << array2[i][j] << "|";
        }
        cout << endl;
    }
    cout << endl;
    // Obliczanie wyznacznika
    if (dimensions == 2)
    {
        determinant = array1[0][0] * array1[1][1] - array1[0][1] * array1[1][0];
    }
    else
    {

            determinant = array1[0][0] * array1[1][1] * array1[2][2] +
                          array1[0][1] * array1[1][2] * array1[2][0] +
                          array1[0][2] * array1[1][0] * array1[2][1] -
                          array1[0][2] * array1[1][1] * array1[2][0] -
                          array1[0][1] * array1[1][0] * array1[2][2] -
                          array1[0][0] * array1[1][2] * array1[2][1];
    }
    // Wyświetlenie wyznacznika
    cout << "Wyznacznik macierzy: " << determinant << endl;
    // mnożenie
    for (int i = 0; i < dimensions; ++i)
    {
        for (int j = 0; j < dimensions; ++j)
        {
            result[i][j] = 0;
            for (int k = 0; k < dimensions; ++k)
            {
                result[i][j] += array1[i][k] * array2[k][j];
            }
        }
    }
    // pokazanie rezultatu mnożenia macierzy
    for (int i = 0; i < dimensions; i++)
    {
        for (int j = 0; j < dimensions; j++)
        {
            cout << "|" << result[i][j] << "|";
        }
        cout << endl;
    }
    int transpose[dimensions][dimensions];
    for (int i = 0; i < dimensions; ++i) {
        for (int j = 0; j < dimensions; ++j) {
            transpose[j][i] = array1[i][j];
        }
    }
    cout << "Transponowana macierz:" << endl;
    for (int i = 0; i < dimensions; ++i) {
        for (int j = 0; j < dimensions; ++j) {
            cout << transpose[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}