// // Iterative approach:
// // #include <stdio.h>
// // int main()
// // {
// //     int fact = 8;
// //     int factorial = 1;
// //     for (int i = 1; i <= fact; i++)
// //     {
// //         factorial = factorial * i;
// //     }
// //     printf("%d", factorial);
// //     return 0;
// // }

// // Recursie approach:
// #include <stdio.h>
// int factorial(int number)
// {
//     if (number == 1 || number == 0)
//     {
//         return 1;
//     }
//     else
//     {
//         return (number * factorial(number - 1));
//     }
// }
// int main()
// {
//     int num;
//     printf("Enter the number you want the factorial of: \n");
//     scanf("%d", &num);
//     printf("The factorial of %d is %d\n", num, factorial(num));
//     return 0;
// }

#include <stdio.h>
int factorial(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        return (num * factorial(num - 1));
    }
}
int main()
{
    int num;
    printf("Enter the number you want to factorial of: ");
    scanf("%d", &num);
    printf("Factorial of %d is %d", num, factorial(num));
    return 0;
}