#include "lists.h"
/**
 * delete_dnodeint_at_index - Entry point
 * @head: argument to delete_dnodeint_at_index function
 * @index: argument to delete_dnodeint_at_index function
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *top, *sec, *tes, *temp, *tp = *head;
unsigned int i, n, k, j;
for (n = 0; tp != NULL; n++)
tp = tp->next;
if (*head != NULL)
{
temp = *head;
if (index == 0) /*deleting at the begining*/
{
*head = temp->next;
free(temp);
(*head)->prev = NULL;
}
else if (index == n - 1) /*deleting at the end*/
{
for (i = 0; i < index - 1; i++)
temp = temp->next;
sec = temp->next;
free(sec);
sec = NULL;
temp->next = NULL;
}
else if ((index > 0) && (index <= n - 1)) /*deleting at the middle*/
{
for (j = 0; j < index - 1; j++)
temp = temp->next;
sec = temp->next;
tes = sec->next;
temp->next = tes;
tes->prev = temp;
free(sec);
sec = NULL;
}
}
top = *head;
for (k = 0; top; k++)
top = top->next;
if (k == n)
return (-1);
return (1);
}
