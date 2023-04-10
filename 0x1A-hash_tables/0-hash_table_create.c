#include "hash_tables.h"
/**
 * hash_table_create - Entry point
 * @size: argument to hash_table_create function
 * Return: NULL if malloc fails else address of newtable.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
unsigned int i = 0;
hash_table_t *my_table = malloc(sizeof(*my_table));
if (my_table == NULL)
return (NULL);
my_table->size = size;
my_table->array = malloc(sizeof(hash_node_t) * my_table->size);
if (my_table->array == NULL) {
    free(my_table);
    return (NULL);
}
while (i < my_table->size) {
my_table->array[i] = NULL;
i++;
}
return (my_table);
}
