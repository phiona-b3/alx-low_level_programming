#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: string
 * @accept: character in str1 that matches one of the characters in str2
 * Return: pointer to the byte in s that matches one of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
int j;

while (*s != '\0')
{
j = 0;
while (accept[j] != '\0')
{
if (*s == accept[j])
{
return (s);
}

j++;
}

s+++;
}
return (0);

}

