#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check the string for digits
 * @str: array string
 *
 * Return: 0 on success
 */
int check_num(char *str)
{
unsigned int count;

count = 0;
while (count < strlen(str)) /*count string */
{
if (!isdigit(str[count])) /*check if there are digits in the string*/
{
return (0);
}
count++;
}
return (1);
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
int count;
int str_to_int;
int sum = 0;

count = 1;
while (count < argc)
{
if (check_num(argv[count]))
{
str_to_int = atoi(argv[count]);
sum += str_to_int;
}

else
{
printf("Error\n");
return (1);
}

count++;
}

printf("%d\n", sum); /*prints sum*/
return (0);
}
