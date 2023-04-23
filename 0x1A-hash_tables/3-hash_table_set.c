#include "hash_tables.h"
/**
 * hash_table_set - Entry point.
 * @ht: argument to hash_table_set
 * @key:argument to hash_table_set
 * @value: argument to hash_table_set
 * Return: 0 if failed else 1
 */
void check_stp(hash_node_t **ptr, unsigned long int *stp, const char *value)
{
(*ptr)->value = strdup(value);
*stp = 1;
}
void insert(hash_table_t **ht, unsigned long int idx,
	    const char *key, const char *value)
{
(*ht)->array[idx]->key = strdup(key);
(*ht)->array[idx]->value = strdup(value);
(*ht)->array[idx]->next = NULL;
}
void insert_pair(hash_table_t **ht, unsigned long int idx,
		 const char *key, const char *value)
{
hash_node_t *new_entry;
new_entry = malloc(8);
if (new_entry != NULL)
{
new_entry->key = strdup(key);
new_entry->value = strdup(value);
new_entry->next = (*ht)->array[idx];
(*ht)->array[idx] = new_entry;
}
}
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int idx, stp = 0;
hash_node_t *ptr = NULL;
if ((ht == NULL) || (ht->array == NULL) || (strcmp(key, "") == 0))
return (0);
idx = key_index((const unsigned char *)key, ht->size);
if (idx < ht->size)
{
if (ht->array[idx] == NULL)
{
ht->array[idx] = malloc(sizeof(ht->size));
if (ht->array[idx] == NULL)
return (0);
insert(&ht, idx, key, value);
}
else
{
if (strcmp(ht->array[idx]->key, key) == 0)
ht->array[idx]->value = strdup(value);
else
{
if (ht->array[idx]->next != NULL)
{
ptr = ht->array[idx];
while ((ptr != NULL) && (stp != 1))
{
ptr = ptr->next;
if (strcmp(ptr->key, key) == 0)
check_stp(&ptr, &stp, value);
if ((stp != 1) && (ptr == NULL))
insert_pair(&ht, idx, key, value);
}
}
else
insert_pair(&ht, idx, key, value);
}
}
}
return (strcmp(ht->array[idx]->key, key) == 0 ? 1 : 0);
}
