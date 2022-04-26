#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory area to fill
 * @n: bytes of memory to fill
 * @b: constant byte to fill
 * Return: the memory area filled
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;

for (a = 0; a < n; a++);
{
s[a] = b;
}

return (s);
}
