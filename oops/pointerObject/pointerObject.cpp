#include <iostream>
using namespace std;

class Cricketer
{
public:
    string name;
    int runs;
    float avg;

    Cricketer(string name, int runs, float avg)
    {
        this->name = name;
        this->runs = runs;
        this->avg = avg;
    };
};

// void change(Cricketer &c)
// {
//     c.avg = 670.2;
// }

void change(Cricketer *c)
{
    // (*c).avg = 770.2;
    // or: both are same interanlly:
    c->avg = 68.75;
}

int main()
{
    Cricketer c1("Virat kohli", 25000, 55.2);

    cout << c1.avg << endl;
    // change(c1);
    change(&c1);
    cout << c1.avg << endl;

    // Cricketer *p1 = &c1;
    // cout << (*p1).runs << endl;
    // cout << p1->runs << endl;
    // (*p1).runs = 400;
    // cout << (*p1).runs << endl;

    return 0;
}