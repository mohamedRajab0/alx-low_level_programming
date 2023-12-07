#include "lists.h"

/**
 * dlistint_len - return length of dlist
 * @h: address of head node
 *
 * Return: size of list
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
