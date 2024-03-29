#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2- Frees listint_t
 * @head: Pointer to pointer to the begining of list
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		temp = *head;
		*(head) = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
