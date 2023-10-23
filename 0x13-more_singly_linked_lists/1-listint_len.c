#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: linked list of type listint_t
 *
 * Return: number of nodes
*/

size_t listint_len(const listint_t *h)
{
	int e = 0;

	while (h)
	{
		e += 1;
		h = h->next;
	}
	return (e);
}
