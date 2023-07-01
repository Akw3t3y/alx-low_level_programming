#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int sum = 2772;
    int rand_num;

    srand(time(0));

    while (sum > 122)
    {
        rand_num = (rand() % 125) + 1;
        printf("%c", rand_num);
        sum -= rand_num;
    }

    printf("%c", sum);

    return (0);
}
