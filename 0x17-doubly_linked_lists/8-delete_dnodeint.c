#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Entry point
 * @head: argument to delete_dnodeint_at_index function
 * @index: argument to delete_dnodeint_at_index function
 *
 * Return: 0 Success
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *temp, *temp2;
dlistint_t *temp5;
dlistint_t *temp6, *temp7;
unsigned int j;

if (index == 0)
{
temp5 = *head;
*head = (*head)->next;
free(temp5);
temp5 = NULL;
(*head)->prev = NULL;
if (temp5 == NULL)
{
return (1);
}
else
{
return (-1);
}
}
else
if
(index == 1)
{
temp6 = (*head)->next;
temp7 = temp6->prev;
temp7->next = temp6->next;
temp6->next->prev = temp7;
free(temp6);
temp6 = NULL;

if (temp6 == NULL)
{
return (1);
}
else
{
return (-1);
}

}
else
if
(index > 1)
{
j = 0;
temp = *head;
while (j < index - 1)
{
temp = temp->next;
j++;
}


temp = temp->next;
temp2 = temp->prev;
temp2->next = temp->next;
temp->next->prev = temp2;
free(temp);

temp = NULL;

if (temp == NULL)
{
return (1);
}
else
{
return (-1);
}

}

return (0);
}
