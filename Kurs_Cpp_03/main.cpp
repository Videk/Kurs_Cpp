#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;

string imie;
int liczba;

int main()
{
    for(int i = 1; i <= 10; i++)
    {
        cout << i << endl;
    }

    cout << "Podaj imie: ";
    cin >> imie;
    cout << "Podaj liczbe: ";
    cin >> liczba;

    for(int i = 1; i <= liczba; i++)
    {
        cout << imie << ", ";
    }

    for(int i = 15; i>=0; i--)
    {
        cout << i << endl;
        Sleep(1000);
        system("cls");
    }
    cout << "JEBUT!";
}
