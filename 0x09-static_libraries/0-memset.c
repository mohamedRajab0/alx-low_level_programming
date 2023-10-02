#include "main.h"

/**
 * *_memset - file memory with constant byte
 *
 * @s: m  area to filled
 * @b: char to copy
 * @n: number of time to copy b
 *
 * Return: pointer to the m  area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
