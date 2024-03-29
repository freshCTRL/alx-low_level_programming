#include "lists.h"
/**
 * insert_dnodeint_at_index - Entry point
 * @h: argument to insert_dnodeint_at_index function
 * @idx: argument to insert_dnodeint_at_index function
 * @n: argument to insert_dnodeint_at_index function
 * Return: NULL (Success)
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *temp = malloc(sizeof(dlistint_t));
dlistint_t *tp = *h, *ptr = *h;
unsigned int k, j;
for (k = 0; ptr != NULL; k++)
ptr = ptr->next;
if (idx > k)
return (NULL);
if (temp == NULL)
return (NULL);
temp->n = n;
if (*h != NULL)
{
if (idx == 0)
{    /* insertion at the beginnning */
temp->next = *h;
(*h)->prev = temp;
*h = temp;
}
else if (idx == k)
{ /* insertion at the end */
while (tp->next != NULL)
tp = tp->next;
tp->next = temp;
temp->prev = tp;
}
else if ((idx > 0) && (idx < k))
{ /* insertion at the middle */
for (j = 0; j < idx - 1; j++)
tp = tp->next;
temp->next = tp->next;
tp->next->prev = temp;
tp->next = temp;
temp->prev = tp;
}
}
if (*h == NULL)
*h = temp;
if (temp->n == n)
return (temp);
return (NULL);
}
