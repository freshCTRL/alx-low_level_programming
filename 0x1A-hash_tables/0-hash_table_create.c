#include "hash_tables.h"
/**
 * hash_table_create - Entry point
 * @size: argument to hash_table_create function
 *
 * Return: NULL if malloc fails else address of newtable.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
unsigned int i;
hash_node_t *array;
hash_table_t *table;

table = malloc(1 * sizeof(hash_table_t));

if (table == NULL)
return (NULL);

table->size = size;
table->array = malloc(size * sizeof(hash_node_t));

if (table->array == NULL)
{
free(table);
table = NULL;
return (NULL);
}

array = malloc(1 * sizeof(hash_node_t));
if (array == NULL)
{
free(table->array);
table->array = NULL;
free(table);
return (NULL);
}

array->key = "";
array->value = "";
array->next = NULL;

i = 0;
for (; i < size; ++i)
{
table->array[i] = array;
}

return (table);
}
