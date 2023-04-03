#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint- Adds new node to begining of list
 * @head: Pointer to the pointer to the start of list
 * @n: value of the new node
 * Return: Address of the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	temp = *head;
	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = temp;
	*head = new;
	return (*head);
}
