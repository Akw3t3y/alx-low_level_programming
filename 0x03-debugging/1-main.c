#include <stdio.h>

/**
 * main - avoids the infinite loop
 * Return: 0
 */
int main(void)
{
    int i;

    printf("Infinite loop incoming :(\n");

    i = 0;

    // Modify the condition to ensure loop termination
    while (i < 3)
    {
        putchar(i);
        i++;
    }

    printf("\nInfinite loop avoided! \\o/\n");

    return (0);
}
