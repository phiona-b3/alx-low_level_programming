#include "main.h"

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{

int count = 0;

if (argc > 0)
{
while (count < argc)
{
printf("%s\n", argv[count]);
count++;
}
}

return (0);
}
