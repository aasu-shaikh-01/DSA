#include <iostream>

using namespace std;

class Scooty // Scooty is parent calss:
{
public:
    int topSpeed;
    float mileage;
    //we cannot inherit private class at all. 
};

class Bike : public Scooty // Bike is a child class:
{
public:
    int gears;
};

int main()
{

    Bike b1;
    b1.gears = 4;
    b1.topSpeed = 150;

    return 0;
}