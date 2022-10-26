#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - prints a linked list, safely
 * @head: list of type listint_t to print
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i;
	long int d;

	i = 0;

	while (head)
	{
		d = head - head->next;
		i++;

		printf("[%p] %d\n", (void *)head, head->n);

		if (d > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	if (!head)
		exit(98);

	return (i);

}
