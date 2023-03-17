#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Entry point
 * @h: argument to insert_dnodeint_at_index function
 * @idx: argument to insert_dnodeint_at_index function
 * @n: argument to insert_dnodeint_at_index function
 *
 * Return: NULL (Success)
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *temp = malloc(sizeof(dlistint_t));
dlistint_t *tp, *ptr;
unsigned int k;
unsigned int j;

if (temp == NULL)
{
return (NULL);
}

k = 0;
ptr = *h;
while (ptr)
{
ptr = ptr->next;
k++;
}

temp->prev = NULL;
temp->n = n;
temp->next = NULL;

if (idx >= k)
{
return (NULL);
}

j = 0;
tp = *h;
while (j < idx - 1)
{
tp = tp->next;
j++;
}
temp->next = tp->next;
tp->next = temp;
temp->prev = tp;
tp = *h;
*h = tp;

return (NULL);
}
