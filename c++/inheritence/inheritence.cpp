#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Tea
{
protected:
    string teaName;
    int servings;

public:
    Tea(string name, int serve) : teaName(name), servings(serve)
    {
        cout << "Tea constructor called " << teaName << endl;
    }

    virtual void brew() const
    {
        cout << "Brewing " << teaName << " with generic method" << endl;
    }
    virtual void serve() const
    {
        cout << "Serving " << servings << " with generic method" << endl;
    }
    virtual ~Tea()
    {
        cout << " Tea Destructor called for " << teaName << endl;
    }
};

class GreenTea : public Tea
{
public:
    GreenTea(int serve) : Tea("Green Tea", serve)
    {
        cout << "Green tea constructor called" << endl;
    }

    void brew() const override
    {
        cout << " Brewing " << teaName << " by steeping green tea leaves" << endl;
    }

    ~GreenTea()
    {
        cout << "Green tea constructor called" << endl;
    }
};

class MasalaTea : public Tea
{
public:
    MasalaTea(int serve) : Tea("Masala Tea", serve)
    {
        cout << "MasalaTea constructor called" << endl;
    }
    void brew() const override final
    {
        cout << " Brewing " << teaName << " by steeping green tea leaves" << endl;
    }

    ~MasalaTea()
    {
        cout << "Masala tea constructor called" << endl;
    }
};

int main()
{

    Tea *tea1 = new GreenTea(2);
    Tea *tea2 = new MasalaTea(2);

    tea1->brew();
    tea1->serve();

    tea2->brew();
    tea2->serve();

    delete tea1;
    delete tea2;

    return 0;
}