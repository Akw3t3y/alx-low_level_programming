#include "main.h"
/**
 * print_times_table - prints time table
 * @n : use in times table
 * Return:void
 */

void print_times_table(int n)
{
int i = 0, result, j;
if (n < 0 || n > 15)
return;
while (i <= n)
{
for (j = 0; j <= n; j++)
{
result = i * j;
if (j == 0)
_putchar('0' + result);
else if (result < 10)
{
_putchar(' ');
_putchar(' ');
_putchar('0' + result);
}
else if (result < 100)
{
_putchar (' ');
_putchar('0' + result / 10);
_putchar('0' + result % 10);
}
else
{
_putchar('0' + result / 100);
_putchar('0' + (result - 100) / 10);
_putchar('0' + result % 10);
}
if (j < n)
{
_putchar(',');
_putchar(' ');			}
}
_putchar('\n');
i++;	}
}
