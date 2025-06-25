#include <iostream>
#include <string>
#include <vector>

using namespace std;

// int main()
// {
//     int arr[5] = {1, 2, 3, 4, 5};
//     for (int i = 0; i < 5; i++)
//     {
//         cout << arr[i] << endl;
//     }
// }

// void inputArray(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cout << "Element no: " << arr[i] << endl;
//     }
// };
// int main()
// {
//     // inputArray({1, 2, 3, 4, 5}, 5);
//     int arrayData[5] = {1, 2, 3, 4, 5};
//     inputArray(arrayData, 5);
//     return 0;
// }

// int *preparedChiaOrders(int cups)
// {
//     int *orders = new int[cups];
//     for (int i = 0; i < cups; i++)
//     {
//         orders[i] = (i + 1) * 10;
//     }
//     return orders;
// };
// int main()
// {
//     int cups = 5;
//     int *chaiOrder = preparedChiaOrders(cups);
//     for (int i = 0; i < cups; i++)
//     {
//         cout << "cups " << i + 1 << " has " << chaiOrder[i] << " ml" << endl;
//     }
//     delete[] chaiOrder;
//     return 0;
// }

// 2-D Array:
int main()
{
    int chaiSales[3][3] = {
        {50, 60, 70},
        {50, 60, 70},
        {50, 60, 70},
    };

    for (int i = 0; i < 3; i++)
    {
        cout << "I am at shop: " << i + 1 << endl;
        for (int j = 0; j < 3; j++)
        {
            cout << chaiSales[i][j] << " cups" << endl;
        }
    }
}
