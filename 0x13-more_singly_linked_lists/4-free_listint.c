#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: list to free
*/

void free_listint(listint_t *head)
{
	listint_t *new;

	while (head)
	{
		new = head->next;
		free(head);
		head = new;
	}
}
