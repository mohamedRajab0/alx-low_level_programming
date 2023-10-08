#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers.
 * @min: starting int
 * @max: mak int
 *
 * Return: array of int
*/

int *array_range(int min, int max)
{
	int *ptr;
	int i, s;

	if (min > max)
		return (NULL);

	s = max - min + 1;
	ptr = malloc(sizeof(int) * s);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
