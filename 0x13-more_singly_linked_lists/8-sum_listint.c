#include "lists.h"

/**
 * sum_listint - returns sun of all data in a list
 * @head: head pointer to a list
 * Return: sum of all data
 */

int sum_listint(listint_t *head)
{
	listint_t *hold;
	int sum = 0;

	hold = head;

	while (hold != NULL)
	{
		sum += hold->n;
		hold = hold->next;
	}

	return (sum);
}
