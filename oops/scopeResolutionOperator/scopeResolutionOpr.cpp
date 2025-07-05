#include <iostream>
using namespace std;

int m = 10;

int main()
{
    int m = 20;

    {
        int k = m;
        int m = 30;
        cout << "We are in the inner block" << endl;
        cout << "k= " << k << endl;
        cout << "k= " << m << endl;
        cout << "::m= " << ::m << endl;
    }
}