// Write a program to print the average of 3 numbers.
#include <stdio.h>

int main()
{
    int n1, n2, n3;
    printf("Enter three number: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    float avg = (n1 + n2 + n3) / 3.0;
    printf("Average %f", avg);
    return 0;
}