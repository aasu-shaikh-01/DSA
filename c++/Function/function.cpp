#include <iostream>
#include <string>

using namespace std;

int checkTemperature(int temperature)
{
    return temperature;
}
void makeTea()
{
    cout << "Here you go sir" << endl;
}

void serveChai(int age)
{
    cout << age << endl;
}
void serveChai(string name = "Aasu")
{
    cout << name << endl;
}

void sum(int num1, int num2)
{
    float addtion = num1 + num2;
    cout << addtion << endl;
}

int main()
{
    // int temp = checkTemperature(50);
    // cout << temp << endl;
    // makeTea();

    // serveChai();
    // serveChai("Shaikh");
    // serveChai(21);
    sum(10, 20);
    return 0;
}