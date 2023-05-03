#include "lists.h"

/**
 * listint_len - get length of linked list.
 *
 * @h: link list
 *
 * Return: count of elemets
 */

size_t listint_len(const listint_t *h)
{
	int count;

	count = 0;

	while (h != 0)
	{
		count++;
		h = h->next;
	}
	return (count);
}
