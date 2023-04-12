#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_print - Entry point.
 * @ht: argument to hash_table_t
 * Return: value if suceeded else 0
*/
void hash_table_print(const hash_table_t *ht)
{
unsigned long int i, size = ht->size, stop = 0;
while ((size > 0) && (stop != 1))
{
size--;
if (ht->array[size] != NULL)
stop = 1;
}
printf("%c", '{');
for (i = 0; i <= size; i++)
{
if (ht->array[i] != NULL)
{
printf("\'%s\':", ht->array[i]->key);
printf(" \'%s\'", ht->array[i]->value);
if (i != size)
{
printf("%c", ',');
printf("%c", ' ');
}
}
}
printf("%c\n", '}');
}