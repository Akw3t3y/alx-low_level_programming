#include <stdio.h>
#include <math.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
unsigned long int number = 612852475143;
unsigned long int i;
while (number % 2 == 0)
{
number /= 2;
}
for (i = 3; i <= sqrt(number); i += 2)
{
while (number % i == 0)
{
number /= i;
}
}
if (number > 2)
printf("%lu\n", number);
return (0);
}
