// Write a program to print the smallest number of two.

#include <stdio.h>

int main()
{
    int n1, n2;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    printf("Smallest: ");
    if (n1 < n2)
    {
        printf("%d\n", n1);
    }
    else
    {
        printf("%d\n", n2);
    }
}