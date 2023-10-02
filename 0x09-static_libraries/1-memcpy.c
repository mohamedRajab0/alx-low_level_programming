#include "main.h"

/**
 * *_memcpy - copy Memory area
 *
 * @dest: dest of Memory area
 * @src: Memory area to copy from
 * @n: Number of byte to copy
 *
 * Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
