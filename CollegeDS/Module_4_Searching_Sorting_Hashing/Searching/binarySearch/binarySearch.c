#include <stdio.h>
int binarSearch(int arr[], int size, int element)
{
    int low = 0;
    int high = size - 1; // 9
    int mid;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return printf("element %d found at index %d", element, mid);
        }
        else if (element < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    printf("Sorry! element not found");
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(int);
    int element = 5;
    binarSearch(arr, size, element);
}