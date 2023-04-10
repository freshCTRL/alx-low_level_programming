#include "hash_tables.h"
/**
 * hash_table_create - Entry point
 * @size: argument to hash_table_create function
 * Return: NULL if malloc fails else address of newtable.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *my_table = calloc(sizeof(hash_table_t), size);
my_table->array = calloc(sizeof(hash_node_t), 8);
if (size == 0)
return (NULL);
if (my_table == NULL)
return (NULL);
my_table->size = size;
return (my_table);
}
