#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: number of times the character \ should be printed
 *
 * Return : ALways 0
 */

void print_diagonal(int n)
{
int i;
int b;

if (n > 0)
{
for (i = 0; i < n; i++)
{
for (b = 0; b < i; b++)
{
putchar (' ');
}
putchar (92);
putchar ('\n');

}
}

else
{
putchar ('\n');
}

}

