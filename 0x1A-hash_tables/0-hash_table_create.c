#include "hash_tables.h"
/**
 * hash_table_create - Entry point
 * @size: argument to hash_table_create function
 *
 * Return: NULL if malloc fails else address of newtable.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *table;

table = malloc(1 * sizeof(hash_table_t));

if (table == NULL)
return (NULL);

table->size = size;
table->array = malloc((table->size / 2) * sizeof(hash_table_t));

if (table->array == NULL)
{
free(table);
table = NULL;
return (NULL);
}

return (table);
}
