#include "hash_tables.h"
/**
 * hash_table_create - Entry point
 * @size: argument to hash_table_create function
 *
 * Return: NULL if malloc fails else address of newtable.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
unsigned long int i;
hash_table_t *table;
hash_node_t *array;

array = malloc(sizeof(hash_node_t));

if (array == NULL)
return (NULL);

array->key = NULL;
array->value = NULL;
array->next = NULL;

table = malloc(1 * sizeof(hash_table_t));

if (table == NULL)
return (NULL);

table->size = size;
table->array = malloc(table->size * sizeof(size));

if (table->array == NULL)
{
free(table);
table = NULL;
return (NULL);
}

for (i = 0; i < size; i++)
table->array[i] = array;

return (table);
}
