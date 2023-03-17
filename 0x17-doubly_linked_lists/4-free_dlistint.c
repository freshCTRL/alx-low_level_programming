#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint_t - Entry point
 * @head: argument to free_dlistint_t
 *
 * Description - No return value
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *temp;
temp = head;
while (temp != NULL)
{
temp = head->next;
free(head);
temp->prev = NULL;
head = temp;
}
}
