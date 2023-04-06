#include "lists.h"

/**
 * print_listint_safe - prints list
 * @head: points to start of list
 * Return: number of nodes in size_t or exit 98 on failure
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;

	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		

		if (head > head->next)
		{
			head = head->next;
		}
		else
		{
			head = head->next;
			printf("-> [%p] %d\n", (void *)head, head->n);
			exit(98);
		}
count++;
	}
	return (count);
}
