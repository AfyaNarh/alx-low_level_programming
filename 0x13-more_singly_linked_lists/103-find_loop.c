#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * find_listint_loop - Finds a loop in a linked list
 * @head: Pointer to the start of the linked list
 * Return: address of node where loop starts or NULL if no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *turtle, *rabbit;

	if (!head)
		return (NULL);

	turtle = rabbit = head;

	while (rabbit && rabbit->next)
	{
		turtle = turtle->next;
		rabbit = rabbit->next->next;

		if (turtle == rabbit)
			break;
	}

	if (turtle != rabbit)
		return (NULL);

	turtle = head;

	while (turtle != rabbit)
	{
		turtle = turtle->next;
		rabbit = rabbit->next;
	}

	return (turtle);
}

