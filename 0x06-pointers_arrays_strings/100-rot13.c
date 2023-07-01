#include "main.h"
/**
 * rot13 - Encodes a string using ROT13 encryption.
 * @str: The string to be encoded.
 *
 * Return: Pointer to the encoded string.
 */
char *rot13(char *str)
{
char *ptr = str;
int i;
while (*ptr)
{
for (i = 0; i < 52; i++)
{
if ((*ptr >= 'a' && *ptr <= 'z') || (*ptr >= 'A' && *ptr <= 'Z'))
{
if ((*ptr >= 'a' && *ptr <= 'm') || (*ptr >= 'A' && *ptr <= 'M'))
*ptr += 13;
else
*ptr -= 13;
}
}
ptr++;
}
return (str);
}
