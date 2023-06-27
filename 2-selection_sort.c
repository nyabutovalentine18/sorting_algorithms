#include "sort.h"

/**
* selection_sort - selection algorthms
* @size: size of array
* @array: array to be sorted
* Return: Nothing
*/
void selection_sort(int *array, size_t size)
{
unsigned int i, d, mn, sp;

for (i = 0; i < size - 1; i++)
{
mn = i;

for (d = i + 1; d < size; d++)
{
if (array[d] < array[mn])
{
mn = d;
}
}
if (mn != i)
{
sp = array[mn];
array[mn] = array[i];
array[i] = sp;
print_array(array, size);
}
}
}
