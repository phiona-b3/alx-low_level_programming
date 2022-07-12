#include <stdio.h>
#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer block  of memory to fill
 * @n: bytes of memory to fill
 * @b: value to set
 * Return: dest
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
*(s + i) = b;
}
return (s);
}
