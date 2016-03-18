#include <iostream>

using namespace std;

float oceny[5];
float suma = 0.0, srednia;

int main()
{
    for(int i = 0; i < 5; i++)
    {
        cout << endl << "Podaj ocene: ";
        cin >> oceny[i];
        suma += oceny[i];
    }

    srednia = suma/5;
    cout << endl << "Srednia ocen: " << srednia << endl;

    return 0;
}
