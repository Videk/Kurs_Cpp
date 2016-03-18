#include <iostream>

using namespace std;

string login, haslo;

int main()
{
    cout << "Podaj login: ";
    cin >> login;
    cout << "Podaj haslo: ";
    cin >> haslo;

    if((login == "admin")&&(haslo == "szarlotka"))
    {
        cout << "Udane logowanie" << endl;
    }
    else
    {
        cout << "Nieudane logowanie" << endl;
    }

    return 0;
}
