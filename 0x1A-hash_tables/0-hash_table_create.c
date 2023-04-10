#include "hash_tables.h"
/**
 * hash_table_create - Entry point
 * @size: argument to hash_table_create function
 * Return: NULL if malloc fails else address of newtable.
*/
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *my_table = malloc(sizeof(hash_table_t));
my_table->array = malloc(sizeof(hash_node_t));
if (size == 0)
return (NULL);
if (my_table == NULL)
return (NULL);
if (my_table->array == NULL)
return (NULL);
my_table->size = size;
return (my_table);
}
