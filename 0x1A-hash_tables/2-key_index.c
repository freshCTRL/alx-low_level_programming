#include "hash_tables.h"
/**
 * key_index - Entry point.
 * @key: argument to key_index function
 * @size: argument to key_index function
 * Return: the index value.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int hash;
unsigned long int idx;

hash = hash_djb2(key);
idx = hash % size;
return (idx);
}
