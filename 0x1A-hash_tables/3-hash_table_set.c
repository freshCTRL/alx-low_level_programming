#include "hash_tables.h"
/**
* insert_pair - Entry point.
* @ht: argument to insert_pair
* @idx: argument to insert_pair
* @key: argument to insert_pair
* @value: argument to insert_pair
* Return: 0 if failed else 1
*/
void insert(hash_table_t **ht, unsigned long int idx,
const char *key, const char *value)
{
(*ht)->array[idx] = malloc(sizeof(hash_node_t));
if ((*ht)->array[idx] == NULL)
return;
(*ht)->array[idx]->key = strdup(key);
(*ht)->array[idx]->value = strdup(value);
(*ht)->array[idx]->next = NULL;
}
/**
* insert_pair - Entry point.
* @ht: argument to insert_pair
* @idx: argument to insert_pair
* @key: argument to insert_pair
* @value: argument to insert_pair
* Return: 0 if failed else 1
*/
void insert_pair(hash_table_t **ht, unsigned long int idx,
const char *key, const char *value)
{
hash_node_t *new_entry;
new_entry = malloc(sizeof(hash_node_t));
if (new_entry == NULL)
return;
new_entry->key = strdup(key);
new_entry->value = strdup(value);
new_entry->next = (*ht)->array[idx];
(*ht)->array[idx] = new_entry;
}
/**
* hash_table_set - Entry point.
* @ht: argument to hash_table_set
* @key:argument to hash_table_set
* @value: argument to hash_table_set
* Return: 0 if failed else 1
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int idx;
int stp = 0;
hash_node_t *ptr = NULL;
if (ht == NULL)
return (0);
if (ht->array == NULL)
return (0);
if (strcmp(key, "") == 0)
return (0);
idx = key_index((const unsigned char *)key, ht->size);
if (ht->array[idx] == NULL)
insert(&ht, idx, key, value);
else
{
if (strcmp(ht->array[idx]->key, key) == 0)
{
free(ht->array[idx]->value);
ht->array[idx]->value = strdup(value);
}
else
{
if (ht->array[idx]->next != NULL)
{
ptr = ht->array[idx];
while ((ptr->next != NULL) && (stp != 1))
{
ptr = ptr->next;
if (strcmp(ptr->key, key) == 0)
{
free(ptr->value);
ptr->value = strdup(value);
stp = 1;
}
if ((stp != 1) && (ptr->next == NULL))
insert_pair(&ht, idx, key, value);
}
}
else
insert_pair(&ht, idx, key, value);
}
}
if (strcmp(ht->array[idx]->key, key) == 0)
return (1);
return (0);
}
