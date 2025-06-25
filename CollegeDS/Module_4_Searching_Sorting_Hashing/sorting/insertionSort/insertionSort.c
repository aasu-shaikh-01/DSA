#include <stdio.h>
void insertionSort(int arr[], int size)
{
    int key, j;
    // Loop for passes:
    for (int i = 1; i < size; i++)
    {
        key = arr[i];
        j = i - 1;
        // Loop for each pass:
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
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
    int arr[] = {7, 11, 9, 2, 17, 4};
    int size = sizeof(arr) / sizeof(int);
    printf("Before sorting:\n");
    printArray(arr, size);

    insertionSort(arr, size);

    printf("After sorting:\n");
    printArray(arr, size);
    return 0;
}
