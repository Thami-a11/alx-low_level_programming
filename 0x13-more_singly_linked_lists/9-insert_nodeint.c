#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 *
 * @head: head
 * @idx: index 
 * @n: integer
 * Return: new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newNode;
	listint_t *_head;

	_head = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && _head != NULL; i++)
		{
			_head = _head->next;
		}
	}

	if (_head == NULL && idx != 0)
		return (NULL);

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
	}
	else
	{
		newNode->next = _head->next;
		_head->next = newNode;
	}

	return (newNode);
}
