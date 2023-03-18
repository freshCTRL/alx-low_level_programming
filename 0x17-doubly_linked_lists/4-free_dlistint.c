#include "lists.h"
/**
 * free_dlistint - a FUNCTION THAT FREEs DOUBLE LINKED LIST
 * @head: argument to free_dlistint_t
 *
 * Description: it takes the address of
 *the head node, frees it and set it to null
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *temp;

if (head == NULL)
{
return;
}
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
