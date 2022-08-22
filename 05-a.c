// Write a function to find sum of digits of a number.

#include <stdio.h>

int sum_of_digits(int n)
{
    int total = 0;
    while (n > 0)
    {
        total += n % 10;
        n /= 10;
    }
    return total;
}

int main(void)
{
    int n;
    printf("Number: ");
    scanf("%i", &n);
    int total = sum_of_digits(n);
    printf("Sum of digits: %i\n", total);
}