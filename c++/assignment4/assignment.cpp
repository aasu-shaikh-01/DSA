#include <iostream>
#include <string>

using namespace std;

// // assigment - 1
// int main()
// {
//     int cups;
//     cout << "How many cups are to be serverd " << endl;
//     cin >> cups;
//     while (cups > 0)
//     {
//         cout << "Here you go" << endl;
//         cups--;
//     }
//     return 0;
// }

// // assigment - 2
// int main()
// {
//     string extra;
//     int cups;
//     do
//     {
//         cout << "Would you like to have tea (say 'yes' or 'no') ";
//         cin >> extra;
//         cout << "How many cups do you want to have? ";
//         cin >> cups;
//         for (int i = 0; i < cups; i++)
//         {
//             cout << "Here you go" << endl;
//         }
//     } while (extra == "yes");
//     return 0;
// }

// // assigment - 3
// int main()
// {
//     int cups = 10;
//     for (int i = 0; i < cups; i++)
//     {
//         cout << "Here you go" << endl;
//     }
//     return 0;
// }

// // assigment - 4
// int main()
// {
//     string cmd;
//     while (true)
//     {
//         cout << "Here you go, do you want more tea (type 'stop' to exit) " << endl;
//         cin >> cmd;
//         if (cmd == "stop")
//         {
//             break;
//         }
//     }
//     cout << "loop exited" << endl;
//     return 0;
// }

// // assigment - 5
// int main()
// {
//     string teaTypes[4] = {"Green_Tea", "Black_Tea", "Lemon_Tea", "Orange_Tea"};

//     // cout << sizeof(teaTypes) / sizeof(teaTypes[0]) << endl;
//     cout << sizeof(teaTypes) << endl;
//     // cout << sizeof(teaTypes[2]) << endl;

//     for (int i = 0; i < 4; i++)
//     {
//         if (teaTypes[i] == "Green_Tea")
//         {
//             continue;
//         }
//         cout << teaTypes[i] << endl;
//     }
//     return 0;
// }

// assigment - 6
int main()
{
    int i = 0;
    string cups[3] = {"Green_Tea", "Black_Tea", "Lemon_Tea"};
    while (i < 3)
    {
        int j = 0;
        while (j < 3)
        {
            cout << cups[i] << endl;
            j++;
        }
        i++;
    }
    return 0;
}