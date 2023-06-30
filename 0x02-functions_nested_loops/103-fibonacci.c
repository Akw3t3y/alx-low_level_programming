#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int term1 = 1;       /* First term of the Fibonacci sequence */
    int term2 = 2;       /* Second term of the Fibonacci sequence */
    int sum = 0;         /* Sum of even-valued terms */
    int temp;            /* Temporary variable for swapping terms */

    printf("%d, %d, ", term1, term2);

    while (term2 <= 4000000)
    {
        if (term2 % 2 == 0)
            sum += term2;

        temp = term1 + term2;
        term1 = term2;
        term2 = temp;

        printf("%d, ", term2);
    }

    printf("\nSum of even-valued terms: %d\n", sum);

    return (0);
}
