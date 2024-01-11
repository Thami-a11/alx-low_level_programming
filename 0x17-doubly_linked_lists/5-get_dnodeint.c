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
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
