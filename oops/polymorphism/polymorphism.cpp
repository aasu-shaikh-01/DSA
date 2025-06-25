#include <iostream>

using namespace std;

class Loading
{
public:
    void sum(int a, int b) // A single sum function is performing different task so we can say this is a function overlaoding and function overloading is example of polymorphism.
    {
        cout << a + b << endl;
    }
    void sum(int a, int b, int c)
    {
        cout << a + b + c << endl;
    }
    void sum(string a, string b)
    {
        cout << a + b << endl;
    }
};

int main()
{
    Loading a;
    a.sum(1, 2);
    a.sum(1, 2, 3);
    a.sum("Aasu", "Shaikh");

    return 0;
}