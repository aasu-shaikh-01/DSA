#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int a = 3, b = 78, c = 1233;

    cout << "The value of a without setw: " << a << endl;
    cout << "The value of b without setw: " << b << endl;
    cout << "The value of c without setw: " << c << endl;

    cout << "The value of a with setw: " << setw(4) << a << endl; // what is the error here
    cout << "The value of b with setw: " << setw(4) << b << endl;
    cout << "The value of c with setw: " << setw(4) << c << endl;

    return 0;
}