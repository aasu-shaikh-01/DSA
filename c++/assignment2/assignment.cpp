#include <iostream>
#include <string>

using namespace std;

// // Assignment - 1:
// int main()
// {
//     double teaPrice, cupOfTea, totalPrice;
//     cout << "How many cup of tea would you like to have? " << endl;
//     cin >> cupOfTea;
//     cout << "Enter price of tea " << endl;
//     cin >> teaPrice;
//     totalPrice = teaPrice * cupOfTea;
//     if (totalPrice >= 100)
//     {
//         totalPrice = totalPrice - (totalPrice * 5 / 100);
//     }
//     cout << totalPrice << " You have to pay";
//     return 0;
// }

// // Assignment - 2:
// int main()
// {
//     int teaBags;
//     cout << "How many teaBags do you have? " << endl;
//     cin >> teaBags;
//     if (teaBags < 10)
//     {
//         // teaBags = teaBags + 5;
//         teaBags += 5;
//     }
//     cout << "Your total bags are " << teaBags << endl;
//     return 0;
// }

// // Assignment - 3:
// int main()
// {
//     int cups;
//     cout << "How many cups do you want to buy ? " << endl;
//     cin >> cups;
//     if (cups >= 10 && cups < 20)
//     {
//         cout << "Congratulatons you got Silver badge!" << endl;
//     }
//     else if (cups >= 20)
//     {
//         cout << "Congratulatons you got Gold badge!" << endl;
//     }
//     else
//     {
//         cout << "No Badge for you" << endl;
//     }
//     return 0;
// }

// Assignment - 4:
int main()
{
    // int cups;
    // string student;
    // cout << "How many cups have you purchased ? " << endl;
    // cin >> cups;
    // cout << "What is you profession ? " << endl;
    // cin >> student;
    // if (cups > 15 || student == "student")
    // {
    //     cout << "Congratulatons you have a tea subscription discount!" << endl;
    // }
    // else
    // {
    //     cout << "You have no subscription";
    // }
    // return 0;

    int cups;
    string student;
    cout << "How many cups have you purchased ? " << endl;
    cin >> cups;
    if (cups < 14)
    {
        cout << "What is you profession ? " << endl;
        cin >> student;
    }
    if (cups > 15 || student == "student")
    {
        cout << "Congratulatons you have a tea subscription discount!" << endl;
    }
    else
    {
        cout << "You have no subscription";
    }
    return 0;
}
