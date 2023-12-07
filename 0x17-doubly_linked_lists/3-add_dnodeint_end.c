#include "lists.h"

/**
 * add_dnodeint_end - add a new node
 *
 * @head: head of the list
 * @n: value of the element
 *
 * Return: the adress of the new element
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t)), *node;

	if (!head || !new)
		return (new ? free(new), NULL : NULL);

	new->n = n;
	new->next = NULL;
	if (!*head)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		node = *head;
		while (node->)
			node = node->next;

		node->next = new;
		new->prev = node;
	}
	return (new);
}
