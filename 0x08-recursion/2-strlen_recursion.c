#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate length of string
*/

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
	len += 1;
	return (len + _strlen_recursion(s + 1));
	}
}
