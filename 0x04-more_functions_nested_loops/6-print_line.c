#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 * print_line - draws a line in the terminal
 *@n : number of times the character _ should be printed
 * Return: 0;
 */
void print_line(int n)
{
int i;

if (n > 0)
{
for (i = 0; i < n; i++)
{
putchar (95);
}

putchar ('\n');
}

else
{
putchar ('\n');
}

}
