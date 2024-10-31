#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: Pointer to the array of integers.
 * @n: Number of elements in the array.
 */
void reverse_array(int *a, int n)
{
int temp, start = 0, end = n - 1;

while (start < end)
{
temp = a[start];
a[start] = a[end];
a[end] = temp;

start++;
end--;
}
}