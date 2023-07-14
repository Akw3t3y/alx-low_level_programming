#include <stdio.h>
#include <stdlib.h>
int _isdigit(char *s)
{
int i = 0;
while (s[i] != '\0')
{
if (s[i] < '0' || s[i] > '9')
return (0);
i++;
}
return (1);
}
void _multiply(char *num1, char *num2)
{
int len1 = 0, len2 = 0;
int i, j;
int *result;
while (num1[len1] != '\0')
len1++;
while (num2[len2] != '\0')
len2++;
result = calloc(len1 + len2, sizeof(int));
for (i = len1 - 1; i >= 0; i--)
{
for (j = len2 - 1; j >= 0; j--)
{
int mul = (num1[i] - '0') * (num2[j] - '0');
int sum = result[i + j + 1] + mul;
result[i + j] += sum / 10;
result[i + j + 1] = sum % 10;
}
}
i = 0;
while (result[i] == 0 && i < len1 + len2 - 1)
i++;
for (; i < len1 + len2; i++)
printf("%d", result[i]);
printf("\n");
free(result);
}
int main(int argc, char *argv[])
{
if (argc != 3 || !_isdigit(argv[1]) || !_isdigit(argv[2]))
{
printf("Error\n");
return (98);
}
_multiply(argv[1], argv[2]);
return (0);
}
