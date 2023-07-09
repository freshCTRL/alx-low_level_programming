#include "hash_tables.h"
/**
 * hash_table_delete - Entry point.
 * @ht: argument to hash_table_create.
 * Description - a function that frees a hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
unsigned long int i;
hash_node_t *ptr1, *ptr = NULL;
if (ht != NULL)
{
for (i = 0; i < ht->size; i++)
{
if (ht->array[i] != NULL)
{
if (ht->array[i]->next != NULL)
{
ptr1 = ht->array[i]->next;
while (ptr1 != NULL)
{
ptr = ptr1->next;
free(ptr1->value);
free(ptr1->key);
free(ptr1->next);
ptr1 = ptr;
}
}
free(ht->array[i]->value);
free(ht->array[i]->key);
free(ht->array[i]->next);
}
ht->array[i] == NULL;
}
}
free(ht->array);
free(ht);
}
