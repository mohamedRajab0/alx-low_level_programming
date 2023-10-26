#include "main.h"
#include <stdio.h>

/**
 * int binary_to_uint - converts a binary number to an unsigned int
 * @b: char string
 *
 * Return: converted number, or 0
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int val;

	if (!b)
		return (0);

	for (val = 0; *b; b++)
	{
	if (*b == '1')
		val = (val << 1) | 1;
	else if (*b == '0')
		val <<= 1;
	else
		return (0);
	}

	return (val);
}
