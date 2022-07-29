#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: size of the array
 * Return: pointer to hash table else NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
unsigned long int i = 0;
hash_table_t *new_table;

if (size <= 1)
{
return (NULL);
}

new_table = malloc(sizeof(hash_table_t));
if (!new_table)
return (NULL);
new_table->size = size;
new_table->array = malloc(sizeof(hash_node_t *) * size);
if (new_table->array == NULL)
{
free(new_table);
return (NULL);
}

while (i < size)
new_table->array[i++] = NULL;
return (new_table);
}
