// Write a program to check if the give number is natural number.

#include <stdio.h>

int main()
{
    int n;
    printf("Number: ");
    scanf("%d", &n);
    printf("%d is ", n);
    if (n < 1)
    {
        printf("not ");
    }
    printf("a Natural Number.\n");
    return 0;
}