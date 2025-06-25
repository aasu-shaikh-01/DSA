#include <iostream>
#include <string>

using namespace std;

// // challange - 1:
// int main()
// {
//     string teaType = "\"Lemon Tea\"";
//     float cupPrice = 9.9;
//     char rating = 'A';

//     cout << teaType << "\n"
//          << cupPrice << "\n"
//          << rating << "\n"
//          << endl;
// }

// // challange - 2:
// int main()
// {
//     float teaPrice;
//     cout << "Enter price for tea" << endl;
//     cin >> teaPrice;
//     float increasedPrice = teaPrice + (teaPrice * 10 / 100);
//     int roundedPrice = (int)increasedPrice;

//     cout << roundedPrice << endl;
// }

// challange - 3:
int main()
{
    int cupOfTea;
    string typeOfTea;
    cout << "Which type of tea would you like to have ? " << endl;
    getline(cin, typeOfTea);
    cout << "How many cup of " << typeOfTea << " would you like to have ? " << endl;
    cin >> cupOfTea;
    cout << "Oho! You have ordered " << cupOfTea << " cup of " << typeOfTea << endl;
}
