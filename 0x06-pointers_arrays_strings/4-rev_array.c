#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array of integers to be reversed.
 * @n: The number of elements in the array.
 */
void reverse_array(int *a, int n)
{
int rev, index;
for (index = n - 1; index >= n / 2; index--)
{
rev = a[n - 1 - index];
a[n - 1 - index] = a[index];
a[index] = rev;
}
}
