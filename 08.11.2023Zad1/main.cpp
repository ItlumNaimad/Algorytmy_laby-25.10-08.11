#include <iostream>
using namespace std;
int suma_dzielnikow = 1;
int liczba;
int main()
{
    cout<<"Podaj liczbe do sprawdzenia czy jest liczba doskonala:"<<endl;
    cin>>liczba;

    for(int i=2; i<=liczba/2; i++)
    {
        if(liczba%i==0)
        {
            suma_dzielnikow+=i;
            cout<<"Dzielnik="<<i<<"Suma dzielnikow="<<suma_dzielnikow<<endl;
        }
    }
    if(suma_dzielnikow==liczba)
        cout<<"Liczba "<<liczba<<" jest liczba doskonala!"<<endl;
    else
        cout<<liczba<<" nie jest liczba doskonala."<<endl;
    return 0;
}
