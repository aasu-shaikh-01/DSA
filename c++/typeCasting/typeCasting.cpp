#include <iostream>
using namespace std;

int main()
{
    float teaPrice = 49.99;
    // cout << teaPrice << endl;
    int roundedTeaPrice = (int)teaPrice; // explicit type conversion
    // int roundedTeaPrice = teaPrice;      // implicit type conversion
    // cout << roundedTeaPrice << endl;
    int teaQuantity = 2;
    // int totalPrice = teaPrice * teaQuantity;
    // float totalPrice = teaPrice * teaQuantity;
    double totalPrice = teaPrice * teaQuantity;
    cout << totalPrice << endl;
}