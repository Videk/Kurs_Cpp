#include <iostream>

using namespace std;

float ile_cali(float m) // m - argument formalny
{
    return m*39.37;
}

float ile_jardow(float m);

void ile_mil(float m)
{
    cout << "Na mile: " << m*0.0006213;
}

float metry;

int main()
{
    cout << "Podaj metry: ";
    cin >>  metry;

    cout << "Na cale: " << ile_cali(metry); // metry - argument aktualny
    cout << "Na jardy: " << ile_jardow(metry);
    ile_mil(metry);

    return 0;
}

float ile_jardow(float m)
{
    return m*1.0936;
}
