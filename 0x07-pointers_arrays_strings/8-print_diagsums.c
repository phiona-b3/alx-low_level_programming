#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: 2d array of chars
 * @size: number matrix
 * Return: void
 */

void print_diagsums(int *a, int size)
{
int i;
int sum1, sum2;

sum1 = 0;
sum2 = 0;

i = 0;
while (i < size) /*number repetitions*/
{
/*sum of diagsums8*/
sum1 = sum1 + *(a + i *size + i);
sum2 = sum2 + *(a + i *size - i - 1);

i++;
}

printf("%i, %i\n", sum1, sum2);
}
