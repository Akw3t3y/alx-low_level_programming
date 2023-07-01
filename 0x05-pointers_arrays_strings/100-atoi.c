#include "main.h"
/**
 * _atoi - Convert a string to an integer
 * @s: The string to convert
 *
 * Return: The converted integer
 */
int _atoi(char *s)
{
int i = 0;
int sign = 1;
int result = 0;
/* Handle leading signs */
while (s[i] == '-')
i++;
/* Handle the sign */
if (s[i] == '-')
{
sign = -1;
i++;
}
else if (s[i] == '+')
{
i++;
}
/* Convert string to integer */
while (s[i] >= '0' && s[i] <= '9')
{
/* Check for overflow */
if ((result * 10) + (s[i] - '0') < result)
{
/* Return minimum or maximum integer value on overflow */
if (sign == -1)
return (-2147483648);
else
return (2147483647);
}
result = (result * 10) + (s[i] - '0');
i++;
}
return (result *sign);
}
