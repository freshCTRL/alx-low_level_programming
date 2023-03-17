#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - Entry point
 * @head: argument to free_dlistint_t
 *
 * Description: set the head of a linked list to null
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *temp;

while (head != NULL)
{
temp = head->next;
free(head);
temp->prev = NULL;
head = temp;
}
}
