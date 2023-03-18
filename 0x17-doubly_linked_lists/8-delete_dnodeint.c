#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Entry point
 * @head: argument to delete_dnodeint_at_index function
 * @index: argument to delete_dnodeint_at_index function
 *
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *tp;
dlistint_t *sec;
dlistint_t *temp;
unsigned int i;
unsigned int n;

n = 0;
tp = *head;
while (tp != NULL)
{
tp = tp->next;
n++;
}

temp = *head;
if (*head == NULL)
{
return 0;
}
else
{
if (index == 0)
{ /* deleteing first */
*head = temp->next;
sec = temp;
sec->next = NULL;
(*head)->prev = NULL;
free(sec);
}
else
if (index == n - 1)
{ /*deleting the last node*/
sec = temp->next;
temp->next = NULL;
sec->prev = NULL;
free(sec);
}
else
if ((index > 0) && (index < n - 1))
{ /* deleteing intemediate */
i = 0;
while (i < index - 1)
{
temp = temp->next;
i++;
}
sec = temp->next;
temp->next = sec->next;
temp->next->prev = temp;
sec->next = NULL;
sec->prev = NULL;
free(sec);
}
}
if (sec == NULL)
{
return (1);
}
else
{
return (-1);
}
return (0);
}
