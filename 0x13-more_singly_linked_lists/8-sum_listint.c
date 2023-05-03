#include "lists.h"

/**
 * sum_listint - sum nodes
 * @head: head
 * Return: Sum of elements
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
