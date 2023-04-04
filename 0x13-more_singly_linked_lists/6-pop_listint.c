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

	if (*head != NULL)
        temp = *head;
	(*head) = (*head)->next;
	free(temp);
	return ((*head)->n);
		return (0);
	
}
