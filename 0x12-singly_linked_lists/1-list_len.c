#include "lists.h"
/**
 * list_len - returns the number of elements in a list
 * @h: pointer to the head of list
 * Return: size_t
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		count += 1;
		h = h->next;
	}
	return (count);
}
