#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integer
 *
 * @a: square matrix of which we print the sum of diagonals
 * @size: size of the matrix
*/

void print_diagsums(int *a, int size)
{
	int i;

	unsigned int c, b;

	c = 0;
	b = 0;

	for (i = 0; i < size; i++)
	{
		c += a[(size * i) + i];
		b += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", c, b);
}
