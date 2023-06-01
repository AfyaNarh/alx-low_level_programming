#include "lists.h"

/**
 * free_list - Frees a list_t list.
 * @head: head pointer
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *hold;

	if (head == NULL)
		return;

	while (head->next != NULL)
	{
		hold = head->next;
		free(head->str);
		free(head);
		head = hold;
	}
	free(head->str);
	free(head);
}
