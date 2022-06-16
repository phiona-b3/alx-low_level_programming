#include <stdio.h>
#include "main.h"

/**
 * print_square - prints a square
 * @size: size of the square
 *
 * Return: 0
 */
void print_square(int size)
{

int i;
int a;

if (size > 0)
{

for (i = 0; i < size; i++)
{
for (a = 0; a < size; a++)
{
putchar (35);
}
putchar ('\n');
}

}

else
{
putchar ('\n');
}
}
