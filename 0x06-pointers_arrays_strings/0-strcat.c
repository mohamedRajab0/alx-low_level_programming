#include "main.h"

/**
 * _strcat - concate two strings
 * @dest: string to apend to
 * @src: string to add to
 *
 * Return: a pointer to the result
*/

char *_strcat(char *dest, char *src)
{
	char *ptr = *dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0')
	{
		*ptr = *src;

		src++;
		ptr++;
	}

	*ptr = '\0';
	return (dest);
}
