#include "lists.h"

/**
 * free_listint - frees a list
 * @head: pointer to beginning of list
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *hold;

	while (head != NULL)
	{
		hold = head->next;
		free(head);
		head = hold;
	}
}
