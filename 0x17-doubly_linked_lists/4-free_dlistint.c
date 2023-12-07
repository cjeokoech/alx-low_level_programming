#include "lists.h"
/**
 * free_dlistint - function to free list
 * @head: pointer to head node
 * Return: 0
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	dlistint_t *next_node;

	current = head;

	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
}
