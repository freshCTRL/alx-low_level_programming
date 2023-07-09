#include "hash_tables.h"
/**
 * hash_table_delete - Entry point.
 * @ht: argument to hash_table_create.
 * Description - a function that frees a hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
unsigned long int i;
hash_node_t *ptr = NULL;
if (ht == NULL)
return;
for (i = 0; i < ht->size; i++)
{
while (ht->array[i] != NULL)
{
ptr = ht->array[i]->next;
free(ht->array[i]->value);
free(ht->array[i]->key);
free(ht->array[i]->next = NULL);
free(ht->array[i]);
ht->array[i] = ptr;
}
ptr = NULL;
}
free(ht->array);
ht->array = NULL;
free(ht);
ht = NULL;
}
