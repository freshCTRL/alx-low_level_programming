#include "hash_tables.h"

/**
 * hash_table_create - Entry point
 * @size: argument to hash_table_create function
 *
 * Return: NULL if malloc fails else address of newtable.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
hash_node_t *array;
hash_table_t *table;

array = malloc(sizeof(hash_node_t));

if (array == NULL)
return (NULL);
array->key = NULL;
array->value = NULL;
array->next = NULL;

table = malloc(sizeof(hash_table_t));

if (table == NULL)
return (NULL);
table->size = size;
table->array = malloc(size * sizeof(array));

if (table->array == NULL)
{
free(table);
table = NULL;
return (NULL);
}

return (table);
}
