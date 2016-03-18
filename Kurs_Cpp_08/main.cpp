#include <iostream>

using namespace std;

int main()
{
    string imie;
    cout << "Podaj imie: ";
    cin >> imie;

    int dlugosc;
    dlugosc = imie.length();

    if(imie[dlugosc-1] == 'a')
    {
        cout << "Jestes kobieta";
    }
    else
    {
        cout << "Jestes mezczyzna";
    }

    return 0;
}
