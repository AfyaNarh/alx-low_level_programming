#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: head of the linked list
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count;
	const listint_t *turtle, *rabbit;

	count = 0;
	turtle = head;
	rabbit = head;

	while (turtle && rabbit && rabbit->next)
	{
		printf("[%p] %d\n", (void *) turtle, turtle->n);
		turtle = turtle->next;
		rabbit = rabbit->next->next;
		if (turtle == rabbit)
		{
			printf("-> [%p] %d\n", (void *)turtle, turtle->n);
			exit(98);
		}
		count++;
	}
	while (turtle)
	{
		printf("[%p] %d\n", (void *)turtle, turtle->n);
		turtle = turtle->next;
		count++;
	}

	return (count);
}
