#include "lists.h"
#include "stdlib.h"
/**
 * add_dnodeint_end - Entry point
 * @head: argument to add_dnode_end
 * @n: argument to add_dnode_end
 *
 * Return: NULL (Success)
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *temp = malloc(sizeof(dlistint_t));
dlistint_t *tp;

if (temp == NULL)
{
return (NULL);
}

temp->prev = NULL;
temp->n = n;
temp->next = NULL;

if (*head == NULL)
{
*head = temp;
}
else
{
tp = *head;
while (tp->next != NULL)
{
tp = tp->next;
}
tp->next = temp;
temp->prev = tp;
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
