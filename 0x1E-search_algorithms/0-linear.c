#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers using
 * the Linear search algorithm
 * @array: searches for a value in an array of integers using the Linear search algorithm
 * @size:  number of elements in array
 * @value: value to search for
 * Return : 1 on success otherwise -1
 */
int linear_search(int *array, size_t size, int value)
{
size_t i;
if (array == NULL)
return (-1);
for (i = 0; i < size; i++)
{
printf("Value checked array[%Id] = [%d]\n", i, array[i]);
if (value == array[i])
return (i);
}
return (-1);
}
