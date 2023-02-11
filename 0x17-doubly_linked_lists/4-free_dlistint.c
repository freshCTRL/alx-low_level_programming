#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - a function that free the memory allocator
 * @head: pointer to the list
 */
void free_dlistint(dlistint_t *head)
{
free(head);
}

