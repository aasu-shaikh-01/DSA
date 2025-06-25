#include <stdio.h>

// Bubble sort:
void bubbleSort(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// // // Adaptive Bubble Sort:
// void bubbleSortAdaptive(int arr[], int n)
// {
//     int isSorted = 0;
//     int temp;
//     for (int i = 0; i < n - 1; i++)
//     {
//         printf("working on pass number %d\n", i + 1);
//         isSorted = 1;
//         for (int j = 0; j < n - 1 - i; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//                 isSorted = 0;
//             }
//         }
//         if (isSorted)
//         {
//             return;
//         }
//     }
// }

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
}

int main()
{
    int arr[] = {7, 11, 9, 2, 17, 4};
    // int arr[] = {7, 11, 12, 13, 14};
    int n = sizeof(arr) / sizeof(int);

    bubbleSort(arr, n);
    // bubbleSortAdaptive(arr, n);
    printArray(arr, n);

    return 0;
}
