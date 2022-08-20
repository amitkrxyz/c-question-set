// Write a program to check if a given number is Armstrong number or not

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    printf("Number: ");
    scanf("%d", &n);

    int digits = floor(log10(abs(n))) + 1;

    int temp = n;
    int result = 0;
    while (temp > 0)
    {
        result += pow(temp % 10, digits);
        temp /= 10;
    }

    printf("%d is ", n);
    if (result != n)
    {
        printf("not ");
    }
    printf("a Armstrong Number.\n");
    return 0;
}