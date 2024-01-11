#include "lists.h"

/**
 * add_dnodeint - Adds node at the beginning of dlistint_t list.
 * @head: Pointer to the head of list.
 * @n: The integer for the new node to contain.
 *
 * Return: fails - NULL.
 *         The address of the new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}
