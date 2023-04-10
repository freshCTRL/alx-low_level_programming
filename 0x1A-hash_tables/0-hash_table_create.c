#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_create - Entry point
 * @size: argument to hash_table_create function
 *
 * Return: NULL if malloc fails else address of newtable.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
unsigned long int i;
hash_node_t *array;
hash_table_t *table;

array = calloc(1, sizeof(hash_node_t));

if (array == NULL)
return (NULL);
array->key = NULL;
array->value = NULL;
array->next = NULL;

table = malloc(sizeof(hash_table_t));

if (table == NULL)
return (NULL);
table->size = size;

table->array = calloc(size, sizeof(hash_node_t));

if (table->array == 0)
return (NULL);

for (i = 0; i < size; i++)
table->array[i] = array;

return (table);
}
