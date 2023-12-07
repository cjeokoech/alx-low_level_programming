#include "lists.h"
/**
 * add_dnodeint_end - function to add node at end
 * @head: head node
 * @n: data
 * Return: address of new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *tail;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (head == NULL)
	{
		return (NULL);
	}
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		tail = *head;

		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		new_node->prev = tail;
		tail->next = new_node;
	}
	return (new_node);
}
