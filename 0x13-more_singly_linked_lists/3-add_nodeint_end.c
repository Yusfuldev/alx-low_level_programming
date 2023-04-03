#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end- adds node to the end of a list
 * @head: pointer to the pointer to the start of list
 * @n: value for the new node
 * Return: Address of the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	temp = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
	return (new);
}
