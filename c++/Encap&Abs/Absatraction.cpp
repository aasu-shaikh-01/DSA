#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Tea
{
public:
    virtual void prepareIngredients() = 0; // Pure virutal funciton
    virtual void brew() = 0;               // Pure virtual function
    virtual void serve() = 0;              // Pure virtual function

    void makeTea()
    {
        prepareIngredients();
        brew();
        serve();
    }
};

// derived calss:
class GreenTea : public Tea
{
public:
    void prepareIngredients() override
    {
        cout << "Green leaves and water is ready" << endl;
    }
    void brew() override
    {
        cout << "Green Tea brewed" << endl;
    }
    void serve() override
    {
        cout << "Green Tea served" << endl;
    }
};

class MasalaTea : public Tea
{
public:
    void prepareIngredients() override
    {
        cout << "Green leaves and water is ready along with masala" << endl;
    }
    void brew() override
    {
        cout << "Masala Tea brewed " << endl;
    }
    void serve() override
    {
        cout << "Masala Tea served" << endl;
    }
};

int main()
{
    GreenTea greenTea;
    MasalaTea masalaTea;

    greenTea.makeTea();
    masalaTea.makeTea();
    return 0;
}