#include "lists.h"
#include <stdlib.h>

/**
 * free_listint- Frees listint_t
 * @head: Pointer to the begining of list
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
