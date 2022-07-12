#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: a pointer to the char that will be updated
 * @src: a pointer to a char that will be updated
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
int i;

i = 0;

while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';

return (dest);

}
