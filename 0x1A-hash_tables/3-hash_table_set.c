#include "hash_tables.h"
/**
 * hash_table_set - Entry point.
 * @ht: argument to hash_table_set
 * @key:argument to hash_table_set
 * @value: argument to hash_table_set
 * Return: 0 if failed else 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int idx, stp = 0;
hash_node_t *ptr = NULL;
if (ht == NULL)
return (0);
if (ht->array == NULL)
return (0);
if (strcmp(key, "") == 0)
return (0);
idx = key_index((const unsigned char *)key, ht->size);
if (idx < ht->size)
{
if (ht->array[idx] == NULL)
{
ht->array[idx] = malloc(sizeof(ht->size));
if (ht->array[idx] == NULL)
return (0);
ht->array[idx]->key = strdup(key);
ht->array[idx]->value = strdup(value);
ht->array[idx]->next = NULL;
}
else
{
ptr = ht->array[idx];
while ((ptr != NULL) && (stp != 1))
{
if (strcmp(ptr->key, key) == 0)
{
ht->array[idx]->value = strdup(value);
stp = 1;
}
ptr = ptr->next;
}
if (stp == 0)
{
hash_node_t *new_entry = malloc(sizeof(ht->size));
if (new_entry == NULL)
return (0);
new_entry->key = strdup(key);
new_entry->value = strdup(value);
new_entry->next = ht->array[idx];
ht->array[idx] = new_entry;
}
}
}
if (strcmp(ht->array[idx]->key, key) == 0)
return (1);
return (0);
}
