#include "lists.h"

/**
 * get_nodeint_at_index- return nth node of a list
 * @head: pointer to start of list
 * @index: index of node to be returned
 * Return: nth node of list or NULL on failure
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;

	if (head == NULL)
		return (NULL);

	while (head && n <= index)
	{
		if (n == index)
			return (head);
		head = head->next;
		n++;
	}
	return (NULL);
}

