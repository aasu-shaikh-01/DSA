#include <stdio.h>

void selectionSort(int arr[], int size)
{
    int smallest, temp;
    for (int i = 0; i < size-1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
}

int main()
{
    // int arr[] = {7, 11, 9, 2, 17, 4};
    int arr[] = {8, 0, 7, 1, 3};
    int size = sizeof(arr) / sizeof(int);

    printf("Before sorting:\n");
    printArray(arr, size);

    selectionSort(arr, size);

    printf("After sorting:\n");
    printArray(arr, size);

    return 0;
}