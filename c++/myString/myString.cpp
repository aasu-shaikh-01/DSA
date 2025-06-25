#include <iostream>
#include <string>
using namespace std;

int main()
{
    // string favouriteTea = "Lemon Tea is \"hello\" my best tea.";
    // string favouriteTea = "Lemon Tea is \n my best tea.";
    // string favouriteTea = "Lemon Tea is \t my best tea.";
    // string favouriteTea = "Lemon Tea is ";
    // string myFavouriteTea = "my best tea.";
    // cout << favouriteTea << myFavouriteTea << endl;
    string name = "Aasu";
    cout << name.length() << endl;
    // cout << name.size() << endl;
    // cout << name[0] << endl;
    // cout << name.at(2) << endl;
    // cout << name.find("a") << endl;
    for (int i = 0; i < name.length(); i++)
        cout << name[i] << endl;
}