#include "main.h"
/**
 * convert_day - converts day of month to day of year, without accounting
 * for leap year
 * @month: month in number format
 * @day: day of month
 * Return: day of year
 */
int convert_day(int month, int day)
{
int dayOfYear = 0;
int i;
for (i = 1; i < month; i++)
{
if (i == 2)
{
dayOfYear += 28;
}
else if (i == 4 || i == 6 || i == 9 || i == 11)
{
dayOfYear += 30;
}
else
{
dayOfYear += 31;
}
}
dayOfYear += day;
return dayOfYear;
}
