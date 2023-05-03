#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: head.
 *
 * Return: data.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;

	int i;

	if (*head == NULL)
		return (0);

	i = (*head)->n;

	temp = (*head)->next;

	free(*head);

	*head = temp;

	return (i);
}
