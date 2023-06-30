#include <stdio.h>
#include "main.h"
/**
 *main - Entry point
 *
 *Description: Prints 10 times the alphabet in lowercase
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
int digit;
char letter;
for (digit = 0; digit < 10; digit++)
{
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
putchar('\n');
}
return (0);
}
