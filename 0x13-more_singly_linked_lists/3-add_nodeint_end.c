#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @n: integer to put in the new node
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	list_t *n_Node;
	list_t *last = *head;

	n_Node = malloc(sizeof(listint_t));

	if (!n_Node)
		return (NULL);

	n_Node->n = n;
	n_Node->next = NULL;

	if (*head == NULL)
	{
		*head = n_Node;
		return (n_Node);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = n_Node;

	return (n_Node);
}
