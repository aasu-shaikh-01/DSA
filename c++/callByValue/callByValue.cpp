#include <iostream>
#include <string>

using namespace std;

// // call By value; means no changes in main value or variable.
// void pourChai(int cups)
// {
//     cups += 5;
//     cout << "Poured cups " << cups << endl;
// }

// int main()
// {
//     int cups = 2;
//     pourChai(cups);
//     cout << "Total cups are " << cups << endl;
//     return 0;
// }

// // call By reference; means changes in main value or variable, to make call by reference from call by value we just have to add ampersand in the parameter of function definition.
// void pourChai(int &cups)
// {
//     cups += 5;
//     cout << "Poured cups " << cups << endl;
// }

// int main()
// {
//     int cups = 2;
//     pourChai(cups);
//     cout << "Total cups are " << cups << endl;
//     return 0;
// }

int main()
{
    // Lamda Function.
    auto preparedChai = [](int cups)
    {
        cout << "Preparing " << cups << " cups of tea..." << endl;
    };
    preparedChai(4);
    return 0;
}