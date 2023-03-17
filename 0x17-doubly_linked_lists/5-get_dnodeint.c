#include "lists.h"
#include <stdlib.h>

/**
 * get_dnodeint_at_index - Entry point
 * @head: argument to get_dnodeint_at_index
 * @index: argument to getnodeint_at_index function
 *
 * Return: NULL (Success)
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *temp;
dlistint_t *tp = malloc(sizeof(dlistint_t));
unsigned int j;
unsigned int n;

temp = head;
n = 0;
while (temp)
{
temp = temp->next;
n++;
}

if (index >= n)
{
return (NULL);
}
else
{
j = 0;
tp = NULL;
tp = head;
while (j < index)
{
tp = tp->next;
j++;
}
return (tp);
}
return (NULL);
}
