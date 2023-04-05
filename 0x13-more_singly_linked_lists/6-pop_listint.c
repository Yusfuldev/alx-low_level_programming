#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint- deletes the headnode of list
 * @head: Pointer to pointer to the start of list
 * Return: the data in head node
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	temp = (*head);
	if ((*head) != NULL)
	{
		n = (*head)->n;
		(*head) = (*head)->next;
		free(temp);
		return (n);
	}
	return (0);
}
