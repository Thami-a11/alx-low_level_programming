#include "lists.h"

/**
* delete_nodeint_at_index - deletes the node.
* @head: head
* @index: index
*
* Return: 1 or  -1.
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i;

listint_t *temp, *current;

current = *head;
i = 0;

if (*head == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;

free(current);

return (1);
}

while (current != NULL)
{
if (i == index - 1)
{
if (current->next == NULL)
{
return (-1);
}

temp = current->next;

current->next = temp->next;

free(temp);

return (1);
}

i++;

current = current->next;
}

return (-1);
}
