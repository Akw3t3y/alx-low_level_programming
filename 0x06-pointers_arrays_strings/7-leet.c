#include "main.h"
/**
 * leet - encodes a string into 1337
 * @str: the string to encode
 *
 * Return: pointer to the encoded string
 */
char *leet(char *str)
{
int i, j;
char leet_letters[] = "aAeEoOtTlL";
char leet_numbers[] = "4433007711";
i = 0;
while (str[i])
{
j = 0;
while (leet_letters[j])
{
if (str[i] == leet_letters[j])
str[i] = leet_numbers[j];
j++;
}
i++;
}
return (str);
}
