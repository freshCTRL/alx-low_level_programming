#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - a FUNCTION THAT FREEs DOUBLE LINKED LIST
 * @head: argument to free_dlistint_t
 *
 * Description: free function
 */

void free_dlistint(dlistint_t *head)
{
dlistint_t *temp;

if (head != NULL)
{
while (head->next != NULL)
{
temp = head;
head = temp->next;
head->prev = NULL;
temp->next = NULL;
free(temp);
temp = NULL;
}
free(head);
head = NULL;
}
}
