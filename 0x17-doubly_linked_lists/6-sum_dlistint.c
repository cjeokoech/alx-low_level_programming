#include "lists.h"
/**
 * sum_dlistint - function to return all sum on data
 * @head: pointer to head
 * Return: 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
