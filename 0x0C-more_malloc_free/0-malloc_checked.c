#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @b: number of bytes
 *
 * Return: a pointer to the allocated
*/

void *malloc_checked(unsigned int b)
{
	int *ml = malloc(b);

	if (ml == 0)
		exit(98);

	return (ml);
}
