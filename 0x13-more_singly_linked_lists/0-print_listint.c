#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 * @h: pointer to the list_t list to print
 * Return: the number of nodes printed
 */
size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		printf("%d\n", h->n);
		node++;
		h = h->next;
	}

	return (node);
}
