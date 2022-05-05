#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string
 * @str: a pointer to an int that will be changed
 *
 * Return: Always 0
 */

void _puts(char *str)
{
char *c;
int m;

c =  str;

for (m = 0; c[m]; m++)
{
putchar (c[m]);
}
putchar('\n');
}
