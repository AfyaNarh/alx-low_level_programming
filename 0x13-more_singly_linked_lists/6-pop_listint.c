#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: head pointer to the list
 * Return: returns the head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *hold;
	int n;

	if (*head == NULL)
		return (0);

	hold = *head;

	n = (*head)->n;

	*head = (*head)->next;

	free(hold);

	return (n);
}
