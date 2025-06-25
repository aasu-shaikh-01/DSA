#include <stdio.h>
#include <stdlib.h>
#define size 6
void swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}
void heapify(int arr[], int n, int i)
{
    if (n == 1)
        return;
    int largest = i;
    int lchild = 2 * i + 1;
    int rchild = 2 * i + 2;
    if (lchild < n && arr[lchild] > arr[largest])
        largest = lchild;
    if (rchild < n && arr[rchild] > arr[largest])
        largest = rchild;

    if (largest != i)
    {
        swap(&arr[i], &arr[largest]);
        heapify(arr, i, 0);
    }
}
void heapSort(int arr[], int n)
{
    int i;
    for (i = n / 2 - 1; i >= 0; i--)
    {
        heapify(arr, n, i);
    }
    for (i = n - 1; i >= 0; i--)
    {
        swap(&arr[0], &arr[i]);
        heapify(arr, i, 0);
    }
}

void display(int arr[], int n)
{
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[size] = {10, 12, 8, 6, 4, 9};
    printf("\nBefore Sort ");
    display(arr, size);
    heapSort(arr, size);
    printf("\nAfter Sort");
    display(arr, size);
    return 0;
}