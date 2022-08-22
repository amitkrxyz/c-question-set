// Write a function to find square root of a number.

#include <stdio.h>
#include <math.h>
#include <ctype.h>

int square_root(int n)
{
    if (n < 0)
    {
        return -1;
    }

    for (int i = 0; i < n; i++)
    {
        if (i * i == n)
        {
            return i;
        }
        else if (i * i > n)
        {
            return i - 1;
        }
    }
}

double square_root2(int n)
{
    double result = pow(10, log10(n) / 2);
    return result;
}

int main(void)
{
    int n;
    printf("Number: ");
    scanf("%i", &n);
    int sq_root = square_root(n);
    if (sq_root < 0)
    {
        printf("Error negative number...\n");
        return 1;
    }

    printf("Square Root: %f\n", sq_root);
    return 0;
}