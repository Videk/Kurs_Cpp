#include <iostream>
#include <time.h>

using namespace std;

int a, b = 1;
int wynik = 0;

clock_t start, stop;
double czas;

long int fib_iter(int n)
{
    for(int i = 2; i <= n; i++)
    {
        wynik = a+b;
        a = b;
        b = wynik;
    }
    return wynik;
}

long int fib_rek(int n)
{
    if(n == 1 || n == 2) return 1;
    else return fib_rek(n-1) + fib_rek(n-2);
}

int main()
{
    start = clock();
    cout << fib_iter(60) << endl;
    stop = clock();
    czas = (stop-start)/CLOCKS_PER_SEC;
    cout << "Czas wykonania funkcji iteracyjnej: " << czas << endl;

    start = clock();
    cout << fib_rek(60) << endl;
    stop = clock();
    czas = (stop-start)/CLOCKS_PER_SEC;
    cout << "Czas wykonania funkcji rekutencyjnej: " << czas << endl;

    return 0;
}
