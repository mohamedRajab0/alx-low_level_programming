#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates an array of chars, and initializes it with
 * specific char
 * @size: size of the array
 * @c: char to initalize the array
 *
 * Return: pointer to the array (success), NULL (Error)
*/

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (0);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
