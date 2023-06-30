#include <stdio.h>

void print_fibonacci_sequence(int n);

int main(void)
{
    print_fibonacci_sequence(98);
    printf("\n");
    return 0;
}

void print_fibonacci_sequence(int n)
{
    int term1 = 1;  /* First term of the Fibonacci sequence */
    int term2 = 2;  /* Second term of the Fibonacci sequence */
    int i;

    printf("%d, %d", term1, term2);  /* Print the first two terms */

    for (i = 3; i <= n; i++)
    {
        int nextTerm = term1 + term2;  /* Calculate the next term */
        printf(", %d", nextTerm);      /* Print the next term */

        term1 = term2;  /* Update the values of term1 and term2 */
        term2 = nextTerm;
    }
}
