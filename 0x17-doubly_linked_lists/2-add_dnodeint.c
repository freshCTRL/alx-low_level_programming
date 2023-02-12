#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - a function that adds a new node
 * at the beginning of a dlistint_t list.
 * @head: pointer to the list
 * @n: data of the list
 *
 * Return: (data)
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
	return (NULL);  
new_node->n = n;
new_node->prev = NULL;
new_node->next = NULL;

new_node->next = *head;
*head->prev = new_node;
*head = new_node;

return (*head);
}

