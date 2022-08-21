// Write a program to check if a numbeer is prime or not.

#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Number: ");
    scanf("%d", &n);

    printf("%d is ", n);

    if (n < 2)
    {
        printf("not a Prime Number.\n");
        return 0;
    }

    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            printf("not a Prime Number.");
            return 0;
        }
    }
    printf("a Prime Number.\n");
    return 0;
}