#include "list.h"

/**
 * add_nodeint_end - add node to the end
 *
 * @head: next node address
 * @n: node
 *
 * Return: last node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *last;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	last = *head;

	newNode->n = n;

	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return;
	}

	while (last->next != NULL)
		last = last->next;

	last->next = newNode;

	return (last);
}
