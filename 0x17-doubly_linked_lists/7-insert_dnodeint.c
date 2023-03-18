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
dlistint_t *tp = *h;
dlistint_t *ptr = *h;
unsigned int k;
unsigned int j;


if (temp == NULL)
{
return (NULL);
}

temp->prev = NULL;
temp->n = n;
temp->next = NULL;

k = 0;
while (ptr->next != NULL)
{
ptr = ptr->next;
k++;
}

if (*h == NULL)
{
return (NULL);
}
else
{
if (idx > k)
{
return (NULL);
}
else
if
(idx == 0)
{
temp->next = *h;
(*h)->prev = temp;
*h = temp;
}
else
{
j = 0;
while (j < idx - 1)
{
tp = tp->next;
j++;
}
temp->next = tp->next;
tp->next->prev = temp;
tp->next = temp;
temp->prev = tp;
}
}

if (temp->n == n)
{
return (temp);
}
else
{
return (NULL);
}

return (NULL);
}
