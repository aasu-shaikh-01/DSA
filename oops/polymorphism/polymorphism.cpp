// // 1. function overloading
// #include <iostream>
// using namespace std;

// class Loading
// {
// public:
//     void sum(int a, int b) // A single sum function is performing different task so we can say this is a function overlaoding and function overloading is example of polymorphism.
//     {
//         cout << a + b << endl;
//     }
//     void sum(int a, int b, int c)
//     {
//         cout << a + b + c << endl;
//     }
//     void sum(string a, string b)
//     {
//         cout << a + b << endl;
//     }
// };

// int main()
// {
//     Loading a;
//     a.sum(1, 2);
//     a.sum(1, 2, 3);
//     a.sum("Aasu", "Shaikh");
//     return 0;
// }

// // 3. Operator Overloading (Binary + Unary).
#include <iostream>
using namespace std;

class Number
{
private:
    int value;

public:
    // Constructor
    Number(int v = 0)
    {
        value = v;
    }

    // Binary + operator overloading
    Number operator+(const Number &obj)
    {
        return Number(value + obj.value);
    }

    // Unary - operator overloading
    Number operator-()
    {
        return Number(-value);
    }

    // Function to display value
    void display()
    {
        cout << "Value: " << value << endl;
    }
};

int main()
{
    Number a(10);
    Number b(5);
    Number sum, neg;

    // Binary operator +
    sum = a + b; // a.operator+(b)
    cout << "Sum of a and b: ";
    sum.display(); // Output: 15

    // Unary operator -
    neg = -a; // a.operator-()
    cout << "Negation of a: ";
    neg.display(); // Output: -10

    return 0;
}
