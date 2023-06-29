#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: Prints all possible combinations of two two-digit numbers
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
int digit1, digit2;
for (digit1 = 0; digit1 <= 8; digit1++)
{
for (digit2 = 0; digit2 <= 9; digit2++)
{
if (digit1 == digit2)
continue;
putchar((digit1 / 10) + '0');
putchar((digit1 % 10) + '0');
putchar(' ');
putchar((digit2 / 10) + '0');
putchar((digit2 % 10) + '0');
if (digit1 != 9 || digit2 != 9)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
