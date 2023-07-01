#include <stdio.h>
int main(void)
{
int n;
int a[5];
int *p;
a[2] = 1024;
p = &n;
*((int *)(((char *)p) + sizeof(int) * 2)) = 98;  /* Add this line */
printf("a[2] = %d\n", a[2]);
return (0);
}
