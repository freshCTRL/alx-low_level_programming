#include "hash_tables.h"
/**
 * hash_table_delete - Entry point.
 * @ht: argument to hash_table_create.
 *
 * Description - a function that frees a hash table.
*/

void hash_table_delete(hash_table_t *ht)
{
unsigned long int i;
hash_node_t *ptr;
if (ht != NULL) {
for (i = 0; i < ht->size; i++)
{
if (ht->array[i] != NULL)
{
ptr = NULL;
while (ht->array[i]->next != NULL)
{
ptr = ht->array[i];
ht->array[i] = ht->array[i]->next;
free(ptr->next);
ptr->next = NULL;
free(ptr);
ptr = NULL;
}
}
}
free(ht->array);
ht->array = NULL;
free(ht);
ht = NULL;
}
}
