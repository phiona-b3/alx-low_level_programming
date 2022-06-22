#include "main.h"
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
int a;
int b;
if (argc == 3)
{
a = atoi(argv[1]); /*converts string to integer */
b = atoi(argv[2]);
printf("%d\n", a *b);
return (0);
}

printf("Error\n");
return (1);
}
