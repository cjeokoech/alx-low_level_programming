#include "lists.h"
/**
 * print_listint - print all elements
 * @h: link list to listint_t to print
 * Return: nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t  l = 0;

	while (h)
	{
		printf("%d\n", h->n);
		l++;
		h = h->next;
	}
	return (l);
}
