#include <stdio.h>

void print_diagsums(int *a, int size)
{
int sum1 = 0, sum2 = 0;
int i;

for (i = 0; i < size; i++)
{
sum1 += a[i * (size + 1)];
}
for (i = 0; i < size; i++)
{
sum2 += a[(i + 1) * (size - 1)];
}
printf("%d, %d\n", sum1, sum2);
}
