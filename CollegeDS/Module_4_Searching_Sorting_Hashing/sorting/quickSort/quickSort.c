#include <stdio.h>

int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low + 1;
    int j = high;
    int temp;

    do
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    } while (i < j);
    // Swap arr[low] and arr[j]:
    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    return j;
}

void quickSort(int arr[], int low, int high)
{
    int partitionIndex;
    if (low < high)
    {
        partitionIndex = partition(arr, low, high);
        quickSort(arr, low, partitionIndex - 1);  // sort left subarray:
        quickSort(arr, partitionIndex + 1, high); // sort right subarray:
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
    // int arr[] = {8, 0, 7, 1, 3};
    int arr[] = {1, 2, 3, 9, 4, 4, 8, 7, 5, 6};
    int size = sizeof(arr) / sizeof(int);

    printf("Before sorting:\n");
    printArray(arr, size);

    quickSort(arr, 0, size - 1);

    printf("After sorting:\n");
    printArray(arr, size);

    return 0;
}