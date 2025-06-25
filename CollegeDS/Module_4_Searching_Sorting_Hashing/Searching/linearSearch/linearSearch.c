// #include <stdio.h>

// int linearSerach(int arr[], int size, int element)
// {

//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == element)
//         {
//             printf("index is: %d", i);
//             return i;
//         }
//     }
//     printf("Element not found");
//     return -1;
// }

// int main()
// {
//     int arr[] = {1, 4, 3, 23, 5, 8, 0}, size = sizeof(arr) / sizeof(int), element = 5;
//     linearSerach(arr, size, element);
//     return 0;
// }
#include <stdio.h>

// Recursive function for linear search
int linearSearch(int arr[], int n, int key, int index)
{
    if (index >= n)
        return -1; // Element not found

    if (arr[index] == key)
        return index; // Element found at index

    return linearSearch(arr, n, key, index + 1); // Recursive call
}

int main()
{
    int arr[100], n, key, result;

    // Input array size
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Input the element to search
    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Call recursive linear search
    result = linearSearch(arr, n, key, 0);

    // Display result
    if (result != -1)
        printf("Element %d found at index %d (position %d).\n", key, result, result + 1);
    else
        printf("Element %d not found in the array.\n", key);

    return 0;
}
