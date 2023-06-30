#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
int i;
long int num1 = 1, num2 = 2, next_num;
printf("%ld, %ld", num1, num2);
for (i = 3; i <= 50; i++)
{
next_num = num1 + num2;
printf(", %ld", next_num);
num1 = num2;
num2 = next_num;
}
printf("\n");
return (0);
}
