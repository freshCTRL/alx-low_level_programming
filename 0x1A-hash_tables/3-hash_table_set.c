#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_set - Entry point.
 * @ht: argument to hash_table_set
 * @key:argument to hash_table_set
 * @value: argument to hash_table_set
 * Return: 0 if failed else 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int idx, i, stp, r;
char *k;
if (strcmp(key, "") == 0)
return (0);
k = strdup(key);
idx = key_index((const unsigned char *)k, ht->size);
if (idx < ht->size)
{
if (ht->array[idx] == NULL)
{
ht->array[idx] = malloc(sizeof(hash_node_t));
if (ht->array[idx] == NULL) /*when the array index is null*/
return (0);
ht->array[idx]->key = strdup(key);
ht->array[idx]->value = strdup(value);
ht->array[idx]->next = NULL;
}
else
{
if (strcmp(ht->array[idx]->key, key) == 0)
{ /*when the array idx is not null and the key are the same and hash to the same value(idx)*/
hash_node_t *new_entry = malloc(sizeof(hash_node_t));
if (new_entry == NULL)
return (0);
new_entry->key = strdup(key);
new_entry->value = strdup(value);
new_entry->next = ht->array[idx];
ht->array[idx] = new_entry;
}
else if (strcmp(ht->array[idx]->key, key) != 0)
{ /* when the array index is not null and keys are different but hash to the same value(idx) */
stp = 0;
for (i = 0; ((i < ht->size) && (stp != 1)); i++)
{
if (ht->array[i] == NULL)
{
ht->array[i] = malloc(sizeof(hash_node_t));
if (ht->array[i] == NULL)
return (0);
ht->array[i]->key = strdup(key);
ht->array[i]->value = strdup(value);
ht->array[i]->next = NULL;
stp = 1;
}
else
{
hash_node_t *new_entry = malloc(sizeof(hash_node_t));
if (new_entry == NULL)
return (0);
new_entry->key = strdup(key);
new_entry->value = strdup(value);
new_entry->next = ht->array[idx];
ht->array[idx] = new_entry;
}
}
}
}
}
for (r = 0; r < ht->size; r++)
{
if (ht->array[r] != NULL)
{
if (strcmp(ht->array[r]->key, key) == 0)
return (1);
}
}
return (0);
}
