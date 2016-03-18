#include <iostream>
#include <cmath>

using namespace std;

float srednia(float *tablica, int ile);
float najblizej(float *tablica, int ile, float srednia);

float liczba[5];
float *p_liczba = liczba;

int main()
{
    for(int i = 0; i < 5; i++)
    {
        cout << "Podaj " << i+1 << " liczbe: "; cin >> *p_liczba;
        p_liczba++;
    }

    float s = srednia(liczba, 5);
    cout << "Srednia: " << s << endl;
    cout << "Liczba najblizsza sredniej: " << najblizej(liczba, 5, s);

    return 0;
}

float srednia(float *tablica, int ile)
{
    float suma = 0;
    for(int i = 0; i < ile; i++)
    {
        suma += *tablica;
        tablica++;
    }
    return suma/(float)ile;
}

float najblizej(float *tablica, int ile, float srednia)
{
    float najblizsza = *tablica;
    float roznica = abs(*tablica - srednia);
    for(int i = 0; i < ile; i++)
    {
        if(abs(*tablica - srednia) < roznica)
        {
            najblizsza = *tablica;
            roznica = abs(*tablica - srednia);
        }
        tablica++;
    }
    return najblizsza;
}
