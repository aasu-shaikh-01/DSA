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
    // void print()
    // {
    //     cout << name << endl
    //          << runs << endl;
    // };

    void print(int runs)
    {
        cout << name << endl
             << this->runs << endl
             << avg << runs << endl;
    };

    int matches()
    {
        return runs / avg;
    };
};

int main()
{
    Cricketer c1("Virat kohli", 25000, 55.2);
    Cricketer c2("Rohit sharma", 18000, 47.8);

    c1.print(5);
    cout << c1.matches() << endl;
    c2.print(9);
    cout << c2.matches() << endl;

    return 0;
}