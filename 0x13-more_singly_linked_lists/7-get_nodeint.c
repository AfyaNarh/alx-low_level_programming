#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: head pointer of the list
 * @index: iterates through a list's index
 * Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *hold;
	unsigned int i;

	hold = head;

	for (i = 0; i < index; i++)
	{
		if (hold == NULL)
			return (NULL);
		hold = hold->next;
	}

	return (hold);
}
