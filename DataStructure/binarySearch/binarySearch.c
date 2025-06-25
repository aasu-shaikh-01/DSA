#include <stdio.h>

int binarySearch(int arr[], int element, int size)
{
    int low, high, mid;
    low = 0;
    high = size - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1;
}

int main()
{
    // 53 - search for this number. (task)
    int arr[] = {1, 3, 5, 10, 15, 20, 25, 30, 35, 40};
    int element = 2, size = sizeof(arr) / sizeof(int);
    int index = binarySearch(arr, element, size);
    printf("The element %d was found at index %d\n", element, index);

    return 0;
}

// or:
// #include <stdio.h>
// int binarySearch(int arr[], int element, int size)
// {
//     int low, mid, high;
//     low = 0;
//     high = size - 1;
//     do
//     {
//         mid = (low + high) / 2;
//         if (arr[mid] == element)
//         {
//             return mid;
//         }
//         if (arr[mid] < element)
//         {
//             low = mid + 1;
//         }
//         else
//         {
//             high = mid - 1;
//         }
//     } while (arr[mid] != element);
//     return -1;
// }
// int main()
// {
//     int arr[] = {1, 3, 5, 10, 15, 20, 25, 30, 35, 40};
//     int element = 35, size = sizeof(arr) / sizeof(int);
//     int index = binarySearch(arr, element, size);
//     printf("The element %d was found at index %d\n", element, index);
//     return 0;
// }
