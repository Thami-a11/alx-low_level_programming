#include "lists.h"

/**
 * add_nodeint - adding a new node
 *
 * @head: head node
 *
 * @n: node address
 *
 * Return: return new node
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	newNode->next = *head;

	*head = newNode;

	return (*head);
}
