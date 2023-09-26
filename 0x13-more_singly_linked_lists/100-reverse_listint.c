#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 *
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prv = NULL;
	listint_t *nxt = NULL;

	while (*head)
	{
		nxt = (*head)->nxt;
		(*head)->nxt = prv;
		prv = *head;
		*head = nxt;
	}
	*head = prv;
	return (*head);
}
