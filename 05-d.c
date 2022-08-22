// Make you own pow function.

#include <stdio.h>

int power(int a, int x)
{
    int result = 1;
    for (int _ = 0; _ < x; _++)
    {
        result *= a;
    }
    return result;
}
int main(void)
{
    int a, x;
    printf("Number: ");
    scanf("%i", &a);
    printf("Power: ");
    scanf("%i", &x);

    int result = power(a, x);
    printf("Result: %i\n", result);

    return 0;
}