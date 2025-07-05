#include <iostream>
using namespace std;

// //1.  Program for enum keyword that is enumerated data type:
// enum Day
// {
//     Sunday,
//     Monday,
//     Tuesday,
//     Wednesday,
//     Thursday,
//     Friday,
//     Saturday
// };
// int main()
// {
//     Day today = Wednesday;
//     if (today == Wednesday)
//     {
//         cout << "Today is Wednesday!" << endl;
//     }
//     return 0;
// }

// 2. Program for typecasting:
int main()
{
    float x = 5.75;
    int y = (int)x; // typecasting float to int

    cout << "Original float: " << x << endl;
    cout << "After typecasting to int: " << y << endl;

    return 0;
}
