#include "search_algos.h"

/**
 * print_array - print array
 * @array: array to search
 * @left: min number
 * @right: max number
 * Return: nothung
 */
void print_array(int *array, int left, int right)
{
int  i;

for (i = left; i < right; i++)
printf("%d, ", array[i]);
printf("%d\n", array[i]);
}

/**
 *  binary_search -  searches for a value in a sorted array of integers
 *  using the Binary search algorithm
 *  @array: sort array to search
 *  @size: size of the array
 *  @value: value to find in array
 *  Return: the index of the value else -1
 */
int binary_search(int *array, size_t size, int value)
{
int left = 0;
int right = (int)size - 1;
int i = 0;

while (left <= right)
{
printf("Searching in array: ");
print_array(array, left, right);
i = (left + right) / 2;
if (array[i] < value)
left = i + 1;
else if (array[i] > value)
right = i - 1;
else
return (i);
}
return (-1);
}
