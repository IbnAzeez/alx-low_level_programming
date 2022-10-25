#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: double pointer to the listint_t list
 * @n: to be inserted in the new node
 * Return: pointer to the node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_Node;

	n_Node = malloc(sizeof(listint_t));

	if (!n_Node)
		return (NULL);

	n_Node->n = n;
	n_Node->next = (*head);
	(*head) = n_Node;

	return (n_Node);
}
