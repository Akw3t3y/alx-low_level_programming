#include "main.h"
#include <stdio.h>

/**
 * infinite_add - Adds two numbers
 * @n1: First number
 * @n2: Second number
 * @r: Buffer to store the result
 * @size_r: Size of the buffer
 *
 * Return: Pointer to the result (r), or 0 if result cannot be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, max_len = 0;
	int sum, carry = 0;
	int i, j;

	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;

	max_len = (len1 > len2) ? len1 : len2;
	if (max_len + 1 > size_r)
		return (0);

	r[max_len] = '\0';
	len1--;
	len2--;

	for (i = max_len - 1; i >= 0; i--)
	{
		sum = carry;
		if (len1 >= 0)
			sum += n1[len1--] - '0';
		if (len2 >= 0)
			sum += n2[len2--] - '0';

		carry = sum / 10;
		r[i] = (sum % 10) + '0';
	}

	if (carry == 1)
	{
		if (max_len + 2 > size_r)
			return (0);
		for (j = max_len; j >= 0; j--)
			r[j + 1] = r[j];
		r[0] = '1';
	}

	return (r);
}
