#include <iostream>

using namespace std;

class Scooty // Scooty is parent calss:
{
public:
    int topSpeed;
    float mileage;

    // private: //Private class can't be inherited to the derived class.
    //     string company;

protected: // protected variable can be inherited to the derived class.
    string company;
};

class Bike : public Scooty // Bike is a child class:
{
public:
    int gears;

    void print()
    {
        cout << company << endl;
    }
};

int main()
{

    Bike b1;
    b1.gears = 4;
    b1.topSpeed = 150;
    // b1.company = "bajaj"; // Why this is not accessible?

    return 0;
}