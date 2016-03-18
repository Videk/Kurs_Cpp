#include <iostream>
#include <time.h>
#include <windows.h>

using namespace std;

void sortowanie_babelkowe(int *tab, int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = n-1; j >= 1; j--)
        {
            if(tab[j] < tab[j-1])
            {
                int bufor = tab[j-1];
                tab[j-1] = tab[j];
                tab[j] = bufor;
            }
        }
    }
}

void quicksort(int *tablica, int lewy, int prawy)
{
    int v = tablica[(lewy+prawy)/2];
    int i, j, x;
    i = lewy;
    j = prawy;
    do
    {
        while(tablica[i] < v) i++;
        while(tablica[j] > v) j--;
        if(i <= j)
        {
            x = tablica[i];
            tablica[i] = tablica[j];
            tablica[j] = x;
            i++; j--;
        }
    }
    while(i <= j);
    if(j > lewy) quicksort(tablica, lewy, j);
    if(i < prawy) quicksort(tablica, i, prawy);
}

int ile;
clock_t start, stop;
double czas;

int main()
{
    cout << "Porownanie czasow sortowania" << endl;
    cout << "Ile losowych liczb w tablicy?: ";
    cin >> ile;
    srand(time(NULL));

    // Dynamiczna alokacja tablicy
    int *tablica;
    tablica = new int [ile];

    int *tablica2;
    tablica2 = new int [ile];

    // Wczytywanie losowych liczb do tablicy
    for(int i = 0; i < ile; i++)
    {
        tablica[i] = rand()%100000+1;
        tablica2[i] = tablica[i];
        //cout << tablica[i] << " ";
    }

    cout << "Sortuje babelkowo, prosze czekac..." << endl;
    start = clock();
    sortowanie_babelkowe(tablica, ile);
    stop = clock();
    czas = (double)(stop-start)/CLOCKS_PER_SEC;
    cout << "Czas sortowania babelkowego: " << czas << " s" << endl;

    cout << "Sortuje quicksort, prosze czekac..." << endl;
    start = clock();
    quicksort(tablica2, 0, ile-1);
    stop = clock();
    czas = (double)(stop-start)/CLOCKS_PER_SEC;
    cout << "Czas sortowania quicksort: " << czas << " s" << endl;

    delete [] tablica;
    delete [] tablica2;

    return 0;
}
