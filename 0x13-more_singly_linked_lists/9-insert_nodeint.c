#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *n_Node;
	listint_t *tmp;
       
	tmp = *head;
	n_Node = malloc(sizeof(listint_t));

	if (!n_Node || !head)
		return (NULL);

	n_Node->n = n;
	n_Node->next = NULL;

	if (idx == 0)
	{
		n_Node->next = *head;
		*head = n_Node;

		return (n_Node);
	}

	i = 0;
	while (tmp && i < idx)
	{
		if (i == idx - 1)
		{
			n_Node->next = tmp->next;
			tmp->next = n_Node;

			return (n_Node);
		}
		else
			tmp = tmp->next;
		i++;
	}

	return (NULL);
}
