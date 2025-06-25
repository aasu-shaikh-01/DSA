#include <stdio.h>

int linearSearch(int arr[], int element, int size)
{
    // int result;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {7, 22, 99, 11, 200, 8, 12, 27, 88};
    int element = 21, size = sizeof(arr) / sizeof(int);
    int index = linearSearch(arr, element, size);
    if (index != -1)
    {
        printf("The element %d was found at index %d\n", element, index);
    }
    else
    {
        printf("Sorry element not found!");
    }
    return 0;
}
