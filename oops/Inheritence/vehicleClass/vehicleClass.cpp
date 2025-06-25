#include <iostream>

using namespace std;

class Vehicle
{
public:
    int topSpeed;
    float mileage;
};

class Car : public Vehicle //child calss /derived class: 
{
public:
};
class Bike : public Vehicle //child calss /derived class: 
{
public:
};
class Truck : public Vehicle //child calss /derived class: 
{
public:
};

int main()
{
    Bike b1;
    b1.topSpeed = 150;

    return 0;
}