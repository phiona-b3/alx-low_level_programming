#include "main.h"

/**
 * main - Entry point
 *print_alphabet - prints the alphabet in lower case
 *
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
char alphabet;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
_putchar(alphabet);

_putchar('\n');
}
