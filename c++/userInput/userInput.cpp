#include <iostream>
#include <string>

using namespace std;

int main()
{
    string userTea;
    int teaQuantity;

    cout << "What would you like to order in tea ";
    getline(cin, userTea);

    cout << "how many cups of " << userTea << " Would you like to have ? ";
    cin >> teaQuantity;

    // cout << teaQuantity;
    // cout << userTea;
    cout << teaQuantity << " cups of " << userTea;

    return 0;
}
