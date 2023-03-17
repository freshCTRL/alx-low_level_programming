#include "lists.h"

/**
 * dlistint_len - Entry point
 * @h: argument to dlistint_t
 *
 * Return: Success(0)
*/
size_t dlistint_len(const dlistint_t *h)
{
size_t n = 0;
while (h)
{
h = h->next;
n++;
}
return (n);
}
