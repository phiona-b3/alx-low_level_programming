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
unsigned int i;

for (i = 0; i < n; i++);
{
*(s + i) = b;

}

return (s);
}
