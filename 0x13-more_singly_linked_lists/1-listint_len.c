#include "lists.h"
/**
 * listint_len - return the number of elements in a linked listint_t list
 * @h: linked list of type listint_t to traverse
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
