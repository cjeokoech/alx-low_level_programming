#include "lists.h"
/**
 * get_dnodeint_at_index - function to return nth list
 * @head: pointer to headnode
 * @index: index of nth element
 * Return: nth index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL && i < index)
	{
		head = head->next;
		i++;
	}
	return ((i == index) ? head : NULL);
}
