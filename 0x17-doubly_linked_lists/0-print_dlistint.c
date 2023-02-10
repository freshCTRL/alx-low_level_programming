#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - a function that prints all the
 * elements of a dlistint_t list
 * @h: pointer to the list
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
size_t count = 0;

if (h == NULL)
	printf("Linked List is empty");
while (h != NULL)
{
	count++;
	printf("%d\n", h->n);
	h = h->next;
}
return (count);
}

