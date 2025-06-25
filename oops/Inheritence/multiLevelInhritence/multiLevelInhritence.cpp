#include <iostream>

using namespace std;

class Vehicle
{
public:
    int topSpeed;
    float mileage;
};

class Car : public Vehicle
{
public:
};

class Truck : public Car
{
public:
};

int main()
{

    return 0;
}