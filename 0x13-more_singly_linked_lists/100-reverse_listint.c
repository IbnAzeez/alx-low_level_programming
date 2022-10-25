#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp1;
	listint_t *tmp2;

	tmp1 = NULL;
	tmp2 = NULL;

	while (*head)
	{
		tmp2 = (*head)->next;
		(*head)->next = tmp1;
		tmp1 = *head;
		*head = tmp2;
	}

	*head = tmp1;

	return (*head);
}
