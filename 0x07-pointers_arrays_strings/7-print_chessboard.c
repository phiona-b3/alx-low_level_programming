#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * print_chessboard - function that prints the chessboard, 2d array
 * @a: 2d array of chars
 * Return: Void
 */
void print_chessboard(char (*a)[8])
{

int i, j;

i = 0;
while (i < 8)
{
j = 0;
while (j < 8)
{
putchar (a[i][j]);
j++;
}
putchar ('\n');
i++;
}

}
