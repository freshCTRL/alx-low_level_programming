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

temp = NULL;
while (head != NULL)
{
temp = head;
head = head->next;
free(temp);
temp = NULL;
head->prev = NULL;
}

}
