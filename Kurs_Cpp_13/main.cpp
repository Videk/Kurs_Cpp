#include <iostream>

using namespace std;

long int potega(int p, int w)
{
    if(w == 0) return 1;
    else return p*potega(p, w-1);
}

long int fib(int n)
{
    if(n == 1 || n == 2) return 1;
    else return fib(n-1)+fib(n-2);
}

long int silnia(int a)
{
    if(a == 0) return 1;
    else return a*silnia(a-1);
}

int podstawa, wykladnik;

int main()
{
    cout << potega(3, 4) << endl;
    cout << fib(8) << endl;
    cout << silnia(6) << endl;

    return 0;
}
