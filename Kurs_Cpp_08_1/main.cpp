#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string wyraz;

    string jeden = "Ala ma";
    string dwa = " kota";
    string trzy = jeden + dwa;  // Konkatenacja

    cout << "Wynik konkatenacji: " << trzy << endl;

    transform(trzy.begin(), trzy.end(), trzy.begin(), ::toupper);
    cout << "Duze litery: " << trzy;

    cout << "Podaj wyraz: ";
    getline(cin, wyraz);    // Wczytywanie spacji
    cout << endl << "Wyraz od tylu: ";

    string szukaj = "KOT";
    size_t pozycja = trzy.find(szukaj);
    if(pozycja != string::npos)
    {
        cout << "Znaleziono na pozycji: " << pozycja;
    }
    else
        cout << "Nie znaleziono";

    jeden.erase(3,3);   // Usuwanie liter
    jeden.insert(5, "Lala");
    jeden.replace(4, 2, "nie ma");
    string nowynapis = trzy.substr(4,7);

    for(int i = wyraz.length()-1; i >= 0; i--)
    {
        cout << wyraz[i];
    }

    return 0;
}
