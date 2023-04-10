#include "hash_tables.h"
/**
 * hash_table_create - Entry point
 * @size: argument to hash_table_create function
 * Return: NULL if malloc fails else address of newtable.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
unsigned long int i;
hash_table_t *my_table = malloc(sizeof(hash_table_t));

if (my_table == NULL)
return (NULL);
my_table->size = size;

my_table->array = malloc(sizeof(hash_node_t) * my_table->size);

if (my_table->array == NULL)
{
free(my_table);
return (NULL);
}

for (i = 0; i < size; i++)
{
my_table->array[i]->value = NULL;
my_table->array[i]->key = NULL;
my_table->array[i] = NULL;
}

return (my_table);
}
