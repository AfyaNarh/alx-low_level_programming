#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - reverses a list
 * @head: pointer to the head of list
 *
 * Return: the head
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;

	return (*head);
}
