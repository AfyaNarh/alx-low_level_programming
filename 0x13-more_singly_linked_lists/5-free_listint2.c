#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list.
 * @head: A pointer to the address of the head.
 * Return: nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *hold;

	if (head == NULL)
		return;

	while (*head)
	{
		hold = (*head)->next;
		free(*head);
		*head = hold;
	}

	head = NULL;
}
