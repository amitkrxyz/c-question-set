// Write a function to find square root of a number.

#include <stdio.h>
#include <math.h>

double square_root(int n)
{
    if (n < 0)
    {
        return -1;
    }
    double root;
    for (int i = 0; i < n; i++)
    {
        if (i * i == n)
        {
            root = i;
            break;
        }
        else if (i * i > n)
        {
            root = i - 1;
            break;
        }
    }

    int precision = 8;
    double incr = 0.1;
    for (int i = 0; i < precision; i++)
    {
        while (root * root < n)
        {
            root += incr;
        }
        root -= incr;
        incr /= 10;
    }

    return root;
}

int main(void)
{
    int n;
    printf("Number: ");
    scanf("%i", &n);
    double sq_root = square_root(n);
    if (sq_root < 0)
    {
        printf("Error negative number...\n");
        return 1;
    }

    printf("Square Root: %.8lf\n", sq_root);
    return 0;
}