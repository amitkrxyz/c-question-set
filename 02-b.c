// Write a program to check if given character is digit or not

#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    printf("%c ", c);
    if (isdigit(c))
    {
        printf("is a digit.\n");
    }
    else
    {
        printf("is not a digit.\n");
    }
}