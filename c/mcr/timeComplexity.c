#include <stdio.h>
#include <stdlib.h>

// int main()
// {
//     // Use of malloc:
//     int *ptr;
//     int n;
//     printf("Enter the size of the array you want to create\n");
//     scanf("%d", &n);
//     // printf("%d", n);
//     ptr = (int *)malloc(n * sizeof(int));
//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter the value no %d of this array\n", i);
//         scanf("%d", &ptr[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("The value at %d of this array is %d\n", i, ptr[i]);
//     }
//     return 0;
// }

// int main()
// {
//     // Use of calloc:
//     int *ptr;
//     int n;
//     printf("Enter the size of the array you want to create\n");
//     scanf("%d", &n);
//     // printf("%d", n);
//     ptr = (int *)calloc(n, sizeof(int));
//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter the value no %d of this array\n", i);
//         scanf("%d", &ptr[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("The value at %d of this array is %d\n", i, ptr[i]);
//     }
//     return 0;
// }

int main()
{
    int *ptr;
    int n;
    printf("Enter the size of the array you want to create\n");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of this array is %d\n", i, ptr[i]);
    }

    // Use of realloc:
    printf("Enter the new size of the array you want to create\n");
    scanf("%d", &n);
    // printf("%d", n);
    ptr = (int *)realloc(ptr, n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of this array is %d\n", i, ptr[i]);
    }
    free(ptr);
    return 0;
}
