#include "hash_tables.h"
/**
* hash_table_delete - Entry point.
* @ht: argument to hash_table_create.
* Description - a function that frees a hash table.
*/
void hash_table_delete(hash_table_t *ht)
{
unsigned long int i;
hash_node_t *ptr1 = NULL, *ptr2 = NULL;
if (ht == NULL)
return;
for (i = 0; i < ht->size; i++)
{
ptr1 = ht->array[i];
while (ptr1)
{
ptr2 = ptr1->next;
free(ptr1->value);
free(ptr1->key);
free(ptr1);
ptr1 = ptr2;
}
}
free(ht->array);
free(ht);
}
