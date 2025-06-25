#include <iostream>
#include <string>

using namespace std;

// // assignment - 1
// int main()
// {
//     string tea;
//     cout << "Which type of tea would you like to have?" << endl;
//     // cin >> tea;
//     getline(cin, tea);
//     if (tea == "Green_Tea")
//     {
//         cout << "You have ordered Green Tea" << endl;
//     }
//     else
//     {
//         cout << "Your order is confirmed";
//     }
//     return 0;
// }

// // assignment - 2
// int main()
// {
//     int hour;
//     cout << "Enter hour (between 0-23)" << endl;
//     cin >> hour;
//     if (hour >= 8 && hour <= 18)
//     {
//         cout << "Tea shop is open" << endl;
//     }
//     else
//     {
//         cout << "Tea shop is closed";
//     }
//     return 0;
// }

// // assignment - 3
// int main()
// {
//     int cups;
//     double pricePerCup = 2.5, totalPrice, discount;
//     cout << "How many cups of tea would you like to have?" << endl;
//     cin >> cups;
//     if (cups >= 10 && cups <= 20)
//     {
//         totalPrice = cups * pricePerCup;
//         discount = totalPrice * 10 / 100;
//         // totalPrice = totalPrice - discount;
//         totalPrice -= discount;
//         cout << "You got 10% discount, Now you have to pay " << totalPrice << endl;
//     }
//     else if (cups > 20)
//     {
//         totalPrice = cups * pricePerCup;
//         discount = totalPrice * 20 / 100;
//         // totalPrice = totalPrice - discount;
//         totalPrice -= discount;
//         cout << "You got 20% discount, Now you have to pay " << totalPrice << endl;
//     }
//     else
//     {
//         cout << "You have no discount";
//         discount = 0;
//     }
//     return 0;
// }

// assignment - 3
int main()
{
    int choice;
    double price;
    cout << "Which type of tea would you like to have? \n";
    cout << "1. Green Tea \n";
    cout << "2. Lemon Tea \n";
    cout << "3. Oolong Tea \n";
    cout << "Select your choice in number \n";
    cin >> choice;
    switch (choice)
    {
    case 1:
        price = 2.0;
        cout << "you have selected Green Tea for " << price << "$" << endl;
        break;
    case 2:
        price = 3.0;
        cout << "you have selected Green Tea for " << price << "$" << endl;
        break;
    case 3:
        price = 4.0;
        cout << "you have selected Green Tea for " << price << "$" << endl;
        break;
    default:
        cout << "Invalid choice \n";
    }
    return 0;
}