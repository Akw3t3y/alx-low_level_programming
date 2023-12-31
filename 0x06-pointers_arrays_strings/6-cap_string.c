#include "main.h"
/**
 * cap_string - Capitalizes all words of a string
 * @str: The string to be capitalized
 *
 * Return: A pointer to the capitalized string
 */
char *cap_string(char *str)
{
int i;
/* Capitalize the first character if it's a lowercase letter */
if (str[0] >= 'a' && str[0] <= 'z')
str[0] -= 32;
/* Capitalize subsequent characters */
for (i = 1; str[i] != '\0'; i++)
{
if ((str[i] >= 'a' && str[i] <= 'z') &&
(str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n' ||
str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' ||
str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' ||
str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' ||
str[i - 1] == '}'))
{
str[i] -= 32;
}
}
return (str);
}
