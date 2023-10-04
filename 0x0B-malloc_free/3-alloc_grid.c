#include "main.h"

/**
 * **alloc_grid - returns a pointer to a 2 dimensional
 * array of integers
 * @width: width of matrix
 * @height: height of matrix
 *
 * Return: pointer to the created matrix (Success), NULL (Error)
*/

int **alloc_grid(int width, int height)
{
	int **ar;
	int i, j;

	if (height <= 0 || width <= 0)
		return (NULL);

	ar = malloc(sizeof(int *) * height);
	if (ar == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ar[i] = malloc(sizeof(int) * width);
		if (ar[i] == NULL)
		{
			free(ar);
			for (j = 0; j <= i; j++)
				free(ar[j]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j > width; j++)
		{
			ar[i][j] = 0;
		}
	}
	return (ar);
}
