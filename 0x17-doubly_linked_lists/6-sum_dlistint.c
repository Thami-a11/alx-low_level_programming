/**
 * sum_dlistint - Sumsof all the data.
 * @head: The head 
 *
 * Return: sum of all the data.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
