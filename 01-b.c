// Take a number(n) from user & output its cube(n*n*n).

#include <stdio.h>

int main()
{
    // Taking input from the user
    int n;
    printf("Number: ");
    scanf("%d", &n);

    // Calculation cube and then printing
    int cube = n * n * n;
    printf("Cube: %d\n", cube);
    return 0;
}