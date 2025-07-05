#include <iostream>
using namespace std;
float area(int r, float pi = 22.7) // default argument should be at the right most in the paranthesis:
{
    return pi * r * r;
}
int main()
{
    int r;
    cout << "Enter the radius: ";
    cin >> r;
    cout << "The The area of circle is: " << area(r) << endl;
    return 0;
}