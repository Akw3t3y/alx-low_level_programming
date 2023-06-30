#include "main.h"
#include <unistd.h>

int _putchar(char c)
{
    return (write(1, &c, 1));
}

void more_numbers(void);

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    more_numbers();
    return 0;
}
