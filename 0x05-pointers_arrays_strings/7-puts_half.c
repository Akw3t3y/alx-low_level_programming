#include "main.h"
/**
 * _strlen - Returns the length of a string.
 * @str: The string to measure.
 *
 * Return: The length of the string.
 */
int _strlen(char *str)
{
int len = 0;
while (*str != '\0')
{
len++;
str++;
}
return len;
}
/**
 * puts_half - Prints the second half of a string.
 * @str: The string to print.
 */
void puts_half(char *str)
{
int length = _strlen(str);
int i, n;
if (length % 2 == 0)
n = length / 2;
else
n = (length - 1) / 2;
for (i = n; i < length; i++)
_putchar(str[i]);
_putchar('\n');
}
