// Write a function to find square root of a number.

#include <stdio.h>
#include <math.h>

float square_root(int n)
{
    if (n < 0)
    {
        return -1;
    }
    float result;
    for (int i = 0; i < n; i++)
    {
        if (i * i == n)
        {
            result = i;
            break;
        }
        else if (i * i > n)
        {
            result = i - 1;
            break;
        }
    }

    for (float i = 0; i < 1; i += 0.00000000001)
    {
        result += i;
        if (result * result == n)
        {
            return result;
        }
        else if (result * result > n)
        {
            return result - i;
        }
    }
}

int main(void)
{
    int n;
    printf("Number: ");
    scanf("%i", &n);
    float sq_root = square_root(n);
    if (sq_root < 0)
    {
        printf("Error negative number...\n");
        return 1;
    }

    printf("Square Root: %f\n", sq_root);
    return 0;
}