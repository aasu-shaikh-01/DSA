#include <iostream>

using namespace std;

class Sugar
{
public:
    string test;
    string state;
    int quantity;
};

class Water
{
public:
    string touchFeel;
    int ltr;
};

class Tea : public Sugar, public Water
{
public:
    string color;
    int cups;
};

int main()
{
    Tea t1;

    t1.color = "ChaiColor";
    t1.cups = 40;
    t1.quantity = 200;
    t1.state = "liquid";
    t1.ltr = 2;
    t1.touchFeel = "hot";
    t1.test = "Sweet";
 
    cout << t1.color << endl;
    cout << t1.cups << endl;
    cout << t1.quantity << endl;
    cout << t1.state << endl;
    cout << t1.ltr << endl;
    cout << t1.touchFeel << endl;
    cout << t1.test << endl;
    return 0;
}
