#include "lists.h"
/**
 * print_dlistint - Entry point
 * @h: argument to print_dlistint
 *
 * Return: 0 (Success)
*/
size_t print_dlistint(const dlistint_t *h)
{
size_t k = 0;
while (h)
{
printf("%d\n", h->n);
h = h->next;
k++;
}
return (k);
}
