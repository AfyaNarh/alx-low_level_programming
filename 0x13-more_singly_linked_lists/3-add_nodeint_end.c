#include "lists.h"

/**
 * add_nodeint_end - adds new node to end a list
 * @head: pointer to a pointer to the head of the list
 * @n: value to be stored in the new node
 * Return: address of new element or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tail;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	tail = *head;
	while (tail->next != NULL)
		tail = tail->next;
	tail->next = new;

	return (new);
}
