#include <stdio.h>
/**
 * main - block to be executed
 * Description: 5 below 1024
 * Return: 0
 */
int main(void)
{
int i = 0, j = 1, next = 0;
int sum = 0;
while (next < 4000000)
{
next = i + j;
i = j;
j = next;
if (next % 2 == 0)
sum += next;
}
printf("%i\n", sum);
return (0);
}
