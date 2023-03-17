#include "lists.h"

/**
 * sum_dlistint - Entry point
 * @head: argument to sum_dlistint
 *
 * Return: an integer to terminate the function
*/

int sum_dlistint(dlistint_t *head)
{
dlistint_t *temp;
int sum;


sum = 0;
temp = head;
while (temp)
{
sum += temp->n;
temp = temp->next;
}
return (sum);
}
