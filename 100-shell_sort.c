#include "sort.h"

/**
* shell_sort - Shell sort algorithm
* @array: unsorted data
* @size: large of array
* Return: Nothing
*/
void shell_sort(int *array, size_t size)
{
int tmp;
size_t k, g, n;

g = 1;
if (!array || size < 2)
{
return;
}

while (g < size / 3)
g = g * 3 + 1;

while (g > 0)
{
for (k = g; k < size; k++)
{
tmp = array[k];
for (n = k; n >= g && tmp < array[n - g]; n -= g)
array[n] = array[n - g];
array[n] = tmp;
}

g /= 3;

print_array(array, size);
}
}

