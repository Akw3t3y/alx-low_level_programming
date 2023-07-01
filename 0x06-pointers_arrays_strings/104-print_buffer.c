#include "main.h"

/**
 * print_buffer - Prints a buffer
 * @b: The buffer to be printed
 * @size: Number of bytes to be printed
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
    int i, j;

    for (i = 0; i < size; i += 10)
    {
        printf("%08x: ", i);

        for (j = 0; j < 10; j++)
        {
            if ((i + j) < size)
                printf("%02x", b[i + j]);
            else
                printf("  ");

            if (j % 2 != 0)
                printf(" ");
        }

        for (j = 0; j < 10; j++)
        {
            if ((i + j) < size)
            {
                if (b[i + j] >= 32 && b[i + j] <= 126)
                    putchar(b[i + j]);
                else
                    putchar('.');
            }
            else
            {
                break;
            }
        }

        putchar('\n');
    }
}