#include <iostream>

using namespace std;

int wiek;

int main()
{
    cout << "Ile masz lat?: ";
    cin >> wiek;

    if(wiek >= 35)
    {
        cout << "Mozesz kandydowac na prezydenta" << endl;
    }
    else if(wiek >= 18)
    {
        cout << "Jestes pelnoletni, ale nie mozesz zostac prezydentem" << endl;
    }
    else
    {
        cout << "Jestes niepelnoletni" << endl;
    }

    return 0;
}
