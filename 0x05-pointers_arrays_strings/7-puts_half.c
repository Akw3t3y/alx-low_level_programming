#include "main.h"
/**
 * _strlen - Returns the length of a string.
 * @s: The string to measure.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
return (length);
}
/**
 * puts_half - Prints the second half of a string.
 * @str: The string to print.
 */
void puts_half(char *str)
{
int length = _strlen(str);
int i;
for (i = (length + 1) / 2; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
