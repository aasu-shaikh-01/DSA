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

int main()
{
    // Cricketer c1("Virat kohli", 25000, 55.2);
    Cricketer *c1 = new Cricketer("Virat kohli", 25000, 55.2);
    cout << c1->avg << endl;
    // int x = 6;
    // int *ptr = new int(299);
    // cout << *ptr << endl;

    // int *p = &x;
    // cout << *p << endl;
    // cout << p << endl;

    return 0;
}