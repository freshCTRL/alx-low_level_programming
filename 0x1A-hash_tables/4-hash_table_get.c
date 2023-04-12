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
char value[50] = "";
char *k, *v;
if (ht == NULL)
return (NULL);
k = strdup(key);
if (strcmp(k, "") == 0)
return (NULL);
idx = key_index((const unsigned char *)k, ht->size);
if (ht->array[idx] == NULL)
return (NULL);
if (ht->array[idx] != NULL)
{
if (strcmp(ht->array[idx]->key, key) == 0)
{
strcat(value, ht->array[idx]->value);
}
else
{
for (i = 0; i < ht->size; i++)
{
if (ht->array[i] != NULL)
{
if (strcmp(ht->array[i]->key, key) == 0)
strcat(value, ht->array[i]->value);
}
}
}
}
v = strdup(value);
if (strcmp(v, "") != 0)
return (v);
return (NULL);
}
