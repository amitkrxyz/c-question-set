// Write a program to print prime numbers in a range.

#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    int b;
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);

    printf("Prime Numbers: ");
    for (int n = a; n < (b + 1); n++)
    {
        if (n < 2)
        {
            continue;
        }

        int isPrime = 1;
        for (int i = 2; i < sqrt(n); i++)
        {
            if (n % i == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1)
        {
            printf("%d ", n);
        }
    }
    printf("\n");
}