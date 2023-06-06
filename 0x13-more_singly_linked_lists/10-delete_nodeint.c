#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: head pointer to the list
 * @index: index of the nodes
 * Return: 1 for success or -1 for failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *hold, *old;
	unsigned int b;

	if (*head == NULL)
		return (-1);

	hold = *head;

	if (index == 0)
	{
		*head = hold->next;
		free(hold);
		return (1);
	}

	for (b = 0; b < index; b++)
	{
		old = hold;
		hold = hold->next;
		if (hold == NULL)
			return (-1);
	}
	old->next = hold->next;
	free(hold);

	return (1);
}
