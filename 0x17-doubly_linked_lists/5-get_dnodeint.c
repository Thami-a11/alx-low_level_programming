#include "lists.h"

/**
 * get_dnodeint_at_index - Gets a node in a list.
 * @head: The head of list.
 * @index: The node to locate.
 *
 * Return: fails - NULL.
 *         the address of the located node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int c;

	for (c = 0; c < index && head->next; c++)
	{
		head = head->next;
	}
	if (c < index)
		return (NULL);
	return (head);
}
