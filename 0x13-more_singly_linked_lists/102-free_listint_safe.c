#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: list to free
 * Return: size of list
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *current;
	unsigned int count = 0;

	while (*h)
	{
		current = *h;
		(*h) = (*h)->next;
		free(current);
		count++;
	}
	*h = NULL;
	return (count);
}
