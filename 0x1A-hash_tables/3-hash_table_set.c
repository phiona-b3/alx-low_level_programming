#include "hash_tables.h"

/**
 * hash_table_set - insert a key, value pair to a hash table.
 * @ht: hash table to insert to.
 * @key: key
 * @value: value to be stored at that key.
 * Return: 1 on SUCCESS otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int idx;
char *str;
hash_node_t *node;
if (!ht || !key)
return (0);
idx = key_index((unsigned char *)key, ht->size);
if (value)
str = strdup(value);
else
str = NULL;
node = ht->array[idx];
if (!node)
node = new_node(NULL);
if (node->key)
{
iht->array[idx] = update_node(node, key, str);
return (1);
}
node->key = strdup(key);
node->value = str;
node->next = NULL;
ht->array[idx] = node;
return (1);
}
