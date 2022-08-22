// Write a function ro print "Hot" or "Cold" depending on the temperature user enters.

#include <stdio.h>

int main(void)
{
    float temp;
    printf("Temperature: ");
    scanf("%f", &temp);

    printf("It's ");
    if (temp > 25)
    {
        printf("Hot\n");
    }
    else
    {
        printf("Cold.\n");
    }
    return 0;
}