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
char *normal = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"; 
while (*ptr)
{
for (i = 0; normal[i]; i++)
{
if (*ptr == normal[i])
{
*ptr = rot13[i];
break;            }
}
ptr++;
}
return (str);
}
