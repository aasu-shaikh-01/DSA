#include <stdio.h>
#include <stdlib.h>
void countSort(int arr[], int n, int max)
{
    int auxCount[max];
    int finalArray[n];
    int j = 0;
    for (int i = 0; i < max; i++)
    {
        auxCount[i] = 0;
    }

    // This is for creating the auxilary array:
    for (int i = 0; i < n; i++)
    {
        auxCount[arr[i]]++;
    }

    // logic for getting final and sorted array:
    for (int i = 0; i < max; i++)
    {
        while (auxCount[i] > 0)
        {
            finalArray[j] = i;
            j++;
            auxCount[i]--;
        }
    }

    // copying the final array that is "finalArrayay" into the the given array that is "arr":
    for (int i = 0; i < n; i++)
    {
        arr[i] = finalArray[i];
    }
    free(finalArray);

    // printing the sorted array:
    printf("sorted Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int count[] = {3, 1, 9, 7, 1, 2, 4};
    int n = sizeof(count) / sizeof(int);
    int max = 0; // Biggest element in the array:

    for (int i = 0; i < n; i++)
    {
        if (count[i] > max)
        {
            max = count[i];
        }
    }
    max = max + 1;
    // printing the unsorted array:
    printf("Unsorted Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", count[i]);
    }
    printf("\n");
    countSort(count, n, max);
    return 0;
}