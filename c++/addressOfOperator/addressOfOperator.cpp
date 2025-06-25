#include <iostream>

using namespace std;

// Pointer stores the address

int main()
{
    int num = 2;
    int *ptr = &num;
    // cout << "the address of varibale num is : " << &num << endl; // Here pointer stores '&num'
    num++;
    cout << num << endl;
    cout << *ptr << endl;
    return 0;
}