#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index- insert node at a given index
 * @head: pointer to pointer to start of list
 * @idx: Index to insert at
 * @n: data in inserted node
 * Return: address of new node or NULL on failure
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 1;
	listint_t *new;
	listint_t *temp;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
		new->n = n;
		return (new);
	}

	if (idx == 0)
	{
		new->next = *head;
		new->n = n;
		*head = new;
		return (new);
	}

	temp = *head;
	while (i < idx)
	{
		temp = temp->next;
		i++;
	}

	new->n = n;
	new->next = temp->next;
	temp->next = new;
	return (new);
}
