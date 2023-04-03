#include "lists.h"

/**
 * sum_listint- sums all the data(n) of a list
 * @head: pointer to the start of the list
 * Return: Sum of all data(n) of the list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head =  head->next;
	}
	return (sum);
}
