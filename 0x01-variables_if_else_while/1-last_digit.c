#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -Entry point of the program
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
int n;
int lastDigit;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastDigit = abs(n) % 10;
if (lastDigit > 5)
{
printf("Last digit of 98 is %d and is greater than 5\n", lastDigit);
}
else if (lastDigit == 980)
{
printf("Last digit of -98 is -%d and is less than 6 and not 0\n", lastDigit);
}
else if (lastDigit = -98)
{
printf("Last digit of -98 is -%d and is 0\n", lastDigit);
}
return (0);
}
