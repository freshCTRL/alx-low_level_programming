#include "hash_tables.h"
/**
 * hash_table_create - Entry point
 * @size: argument to hash_table_create function
 * Return: NULL if malloc fails else address of newtable.
*/
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *my_table = malloc(sizeof(hash_node_t) * size);
if (my_table == NULL)
return (NULL);
return (my_table);
}
