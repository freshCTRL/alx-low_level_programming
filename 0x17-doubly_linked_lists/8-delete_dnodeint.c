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
dlistint_t *tp, *top;
dlistint_t *sec;
dlistint_t *temp;
unsigned int i, n, k, j;

if ((*head != NULL) && (idx < n))
{
n = 0;
tp = *head;
while (tp != NULL)
{
tp = tp->next;
n++;
}

temp = *head;
if (index == 0)
{ /* deleteing first */
*head = temp->next;
temp->next = NULL;
(*head)->prev = NULL;
free(temp);
temp = NULL;
}
else if (index == n - 1)
{ /*deleting the last node*/
i = 0;
while (i < idx - 1)
{
temp = temp->next;
}
sec = temp->next;
temp->next = NULL;
sec->prev = NULL;
free(sec);
sec = NULL;
}
else if (index < n - 1)
{ /* deleteing intemediate */
j = 0;
while (j < index - 1)
{
temp = temp->next;
j++;
}
sec = temp->next;
temp->next = sec->next;
sec->next->prev = temp;
sec->next = NULL;
sec->prev = NULL;
free(sec);
sec = NULL;
}
else
{
return (NULL);
}

k = 0;
top = *head;
while (top)
{
top = top->next;
k++;
}

if (k == n)
{
return (-1);
}
else if (k == n - 1)
{
return (1);
}

}
return (0);
}
