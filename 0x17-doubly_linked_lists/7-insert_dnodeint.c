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
dlistint_t *tp;
dlistint_t *ptr = *h;
unsigned int k;
unsigned int j;

k = 0;
while (ptr != NULL)
{
ptr = ptr->next;
k++;
}

if (temp == NULL)
{
return (NULL);
}

temp->prev = NULL;
temp->n = n;
temp->next = NULL;

tp = *h;
if ((idx > k) || (*h == NULL))
{
return (NULL);
}
else
{
if (idx == 0)
{    /* insertion at the beginnning */
temp->next = *h;
(*h)->prev = temp;
*h = temp;
}
else
if (idx == k)
{ /* insertion at the end */
while (tp->next != NULL)
{
tp = tp->next;
}
tp->next = temp;
temp->prev = tp;
}
else
{ /* insertion at the middle */
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

return (NULL);
}
