#include <stdio.h>
#include <stdlib.h>
#define n 10

struct pair
{
    int key;
    int value;
};

void display(struct pair ht[], int sizeOfArray)
{
    printf("\nKey\tValue\n");
    for (int i = 0; i < sizeOfArray; i++)
    {
        printf("%d\t%d\n", ht[i].key, ht[i].value);
    }
};

int main()
{
    struct pair ht[n];
    int arr[n] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 100};
    for (int i = 0; i < n; i++)
    {
        ht[arr[i] % n].key = arr[i] % 10;
        ht[arr[i] % n].value = arr[i];
    }
    display(ht, n);
    int num;
    printf("\nEnter num search :");
    scanf("%d", &num);
    printf("Element at %d Postition", ht[num % 10].key);
    return 0;
}