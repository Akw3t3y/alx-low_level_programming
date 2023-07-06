#include <unistd.h>

/**
 * _putchar - Writes a character to stdout.
 * @c: The character to be written.
 *
 * Return: On success, returns the number of characters written.
 * On error, -1 is returned and errno is set appropriately.
 */
void _putchar(char c)
{
    write(1, &c, 1);
}
