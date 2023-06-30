#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void) {
    int term1 = 1;       /* First term of the Fibonacci sequence */
    int term2 = 2;       /* Second term of the Fibonacci sequence */
    int nextTerm;        /* Variable to store the next term */
    long sumEven = 2;    /* Variable to store the sum of even-valued terms */
    int count;

    printf("%d, %d, ", term1, term2);  /* Print the first two terms */

    for (count = 3; count <= 50; count++) {
        nextTerm = term1 + term2;
        term1 = term2;
        term2 = nextTerm;

        printf("%d", nextTerm);

        if (count < 50) {
            printf(", ");
        }

        if (nextTerm % 2 == 0) {
            sumEven += nextTerm;
        }
    }

    printf("\nSum of even-valued terms: %ld\n", sumEven);

    return (0);
}
