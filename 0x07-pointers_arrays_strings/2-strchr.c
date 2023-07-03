#include "main.h"
#include <stdio.h>

/**
 * *_strchr - Locates a character in a string
 *
 * @s: Str to search
 * @c: Char to find
 *
 * Return: Pointer to first occurrence of character
 * c in str s, or NULL if character is not found
*/

char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		j = *s++;
		if (j == c)
		{
			return (s - 1);
		}
		if (j == 0)
		{
			return (NULL);
		}
	}
}
