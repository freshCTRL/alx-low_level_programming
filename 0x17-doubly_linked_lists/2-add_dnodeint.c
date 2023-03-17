#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - Entry point
 * @head: argument to add_dnode_int
 * @n: argument to add_dnode_int
 *
 * Return: (0) Success
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;
new = malloc(sizeof(dlistint_t));

if (new == NULL)
{
return (NULL);
}

new->prev = NULL;
new->n = n;
new->next = NULL;

new->next = *head;
*head = new;

return (NULL);
}
