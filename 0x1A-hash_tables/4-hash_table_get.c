#include "hash_tables.h"
#include "string.h"
/**
 * hash_table_get - Entry point.
 * @ht: argument to hash_table_get
 * @key: argument to hash_table_get
 * Return: 0 if failed else 1.
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int idx, i;
if (strcmp(key, "") == 0)
return (NULL);
if (ht == NULL)
return (NULL);
idx = key_index((const unsigned char *)key, ht->size);
if (ht->array[idx] == NULL)
return (NULL);
if (ht->array[idx] != NULL)
{
if (strcmp(ht->array[idx]->key, key) == 0)
{
return (ht->array[idx]->value);
}
else
{
if (ht->array[idx]->next != NULL)
{
while (ht->array[idx] != NULL)
{
if (strcmp(ht->array[idx]->key, key) == 0)
return (ht->array[idx]->value);
ht->array[idx] = ht->array[idx]->next;
}
}
for (i = 0; i < ht->size; i++)
{
if (ht->array[i] != NULL)
{
while (ht->array[i] != NULL)
{
ht->array[i] = ht->array[i]->next;
if (strcmp(ht->array[i]->key, key) == 0)
return (ht->array[i]->value);
}
}
}
}
}
return (NULL);
}
