#include "hash_tables.h"
#include <stdlib.h>

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
array = malloc(sizeof(hash_node_t));

array->key = NULL;
array->value = NULL;
array->next = NULL;

hash_table_t *table;

table = malloc(sizeof(hash_table_t));
table->size = size;
table->array = malloc(size * sizeof(array));

return (table);
}
