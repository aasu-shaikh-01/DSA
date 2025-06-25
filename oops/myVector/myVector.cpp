#include <iostream>
using namespace std;

class Vector
{
public:
    int size;
    int capacity;
    int *arr;

    Vector()
    {
        size = 0;
        capacity = 1;
        arr = new int[1];
    }

    void add(int ele)
    {
        if (size == capacity)
        {
            capacity *= 2;
            int *arr2 = new int[capacity];
            for (int i = 0; i < size; i++)
            {
                arr2[i] = arr[i];
            }
            arr = arr2;
        }
        arr[size++] = ele;
    }

    void print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << endl;
        }
    }

    int get(int idx)
    {
        if (size == 0)
        {
            cout << "Array i empty" << endl;
            return -1;
        }
        if (idx >= size)
        {
            cout << "Invalid Index" << endl;
            return -1;
        }
        return arr[idx];
    }
    void remove()
    {
        if (size == 0)
        {
            cout << "Array i empty" << endl;
        }
        size--;
    }
};

int main()
{
    Vector v;
    v.add(10);
    v.add(20);
    v.remove();
    v.print();
    return 0;
}
// int *arr = new int[5];
// // int arr[3];
// arr[0] = 10;
// arr[1] = 20;
// arr[2] = 30;
// cout << arr[0] << endl;
// cout << arr[1] << endl;
// cout << arr[2] << endl;