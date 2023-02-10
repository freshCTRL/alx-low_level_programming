#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - a function that returns the number of
 * elements in a linked dlistint_t list
 * @h: pointer to the list
 *
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
size_t count = 0;
while (h != NULL)
{
	count++;
	return (count);
}
return (count);
}

