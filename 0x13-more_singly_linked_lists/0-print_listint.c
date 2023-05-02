#include "lists.h"

/**
 * print_listint - prints elements of a list.
 * @h: head.
 *
 * Return: numbers of nodes.
*/


size_t print_listint(const listint_t *h)
{
	const listint_i *cur = h;

	size_t cnt;

	cnt = 0;

	while (cur != NULL)
	{
		printf("%d\n", cur->n);
		cur = cur->n;
		cnt++;
	}
	return (cnt);
}
