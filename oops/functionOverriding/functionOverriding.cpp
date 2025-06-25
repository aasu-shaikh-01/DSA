#include <iostream>

using namespace std;

class Scooty
{
public:
    int topSpeed;
    float mileage;
    virtual void sound()
    {
        cout << "Vroom Vroom" << endl;
    }
};

class Bike : public Scooty
{
public:
    int gears;
    void sound()
    {
        cout << "Dhroom Dhroom" << endl;
    }
};

int main()
{

    Scooty *b1 = new Bike();
    // b1->mileage
    b1->sound();

    return 0;
}