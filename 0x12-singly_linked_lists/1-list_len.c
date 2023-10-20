#include <stdlib.h>
#include "list.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to list
 *
 * Return: number of element
*/

size_t list_len(const list_t *h)
{
	size_t t = 0;

	while (h)
	{
		t++;
		h = h->next;
	}

	return (t);
}
