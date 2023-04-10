#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_create - Entry point
 * @size: argument to hash_table_create function
 * Return: NULL if malloc fails else address of newtable.
*/
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *my_table = malloc(sizeof(hash_table_t));
if (my_table == NULL)
return (NULL);
my_table->size = size;
my_table->array = calloc(my_table->size, sizeof(hash_node_t));
if (my_table->array == NULL)
{
free(my_table);
return (NULL);
}
return (my_table);
}
