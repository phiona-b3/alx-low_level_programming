#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order using the
 * Bubble sort algorithm
 * @array: The array to be sorted
 * @size: The size of the array
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
int i, n, tmp;

if (array == NULL || size < 2)
return;
tmp = 0;
n = size - 1;
while (n)
{
for (i = 0; i < n; i++)
{
tmp = array[i];
if (tmp > array[i + 1])
{
array[i] = array[i + 1];
array[i + 1] = tmp;
print_array(array, size);
}

}

n -= 1;
}

}

