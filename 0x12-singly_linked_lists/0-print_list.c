#include "list.h"
/**
 * print_list- prints elements of a list
 * @h: pointer to the list
 * Return: no of node
 */
size_t print_list(const list_t *h)
{
unsigned int count = 0, n;
char s;

s = h->str;
n = h->len
if (s == NULL)
{
s = "(nil)";
n = "[0]";
_putchar(n);
_putchar(" ")
_putchar(s);
}
while (h != NULL)
{
_putchar(n);
_putchar(" ")
_putchar(s);
count++;
}

return (count);
}
