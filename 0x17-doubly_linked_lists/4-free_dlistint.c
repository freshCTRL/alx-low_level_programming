#include "lists.h"
/**
 * free_dlistint - a FUNCTION THAT FREEs DOUBLE LINKED LIST
 * @head: argument to free_dlistint_t
 **/
void free_dlistint(dlistint_t *head)
{
dlistint_t *temp;

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
