// Write a program to calculate perimeter of rectangle. Take sides, a & b, from the user.

#include <stdio.h>

int main()
{
    int a, b;
    // Taking input from the user
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);

    // Calculating perimiter Formula: Perimeter = 2 X (1st Side + 2nd Side)
    int perimeter = 2 * (a + b);

    // Printing perimeter of the rectangle
    printf("Perimeter: %d\n", perimeter);
    return 0;
}