#include "lists.h"
/**
 * print_list- print elements of a list
 * @h: pointer to the list
 * Return: no of node
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;


	if (!h)
		return (0);
	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		count += 1;
		h = h->next;
	}
	return (count);
}
