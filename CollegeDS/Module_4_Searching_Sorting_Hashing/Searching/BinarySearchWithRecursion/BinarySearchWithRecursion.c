#include <stdio.h>
// This is the program binary search without using recusion: 
int binarySearchRecursive(int arr[], int low, int high, int target) {
    if (low > high)
        return -1; // Element not found

    int mid = (low + high) / 2;

    if (arr[mid] == target)
        return mid;
    else if (target < arr[mid])
        return binarySearchRecursive(arr, low, mid - 1, target);
    else
        return binarySearchRecursive(arr, mid + 1, high, target);
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 9;

    int result = binarySearchRecursive(arr, 0, size - 1, target);

    if (result != -1)
        printf("Element found at index: %d\n", result);
    else
        printf("Element not found.\n");

    return 0;
}
