#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 * @head: head
 * @index: index
 *
 * Return: nth node
*/


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t current;

	while (currnet != NULL)
	{
		if (current->n == index)
			return (current);

		current = current->next;
	}
	return (current);
}
