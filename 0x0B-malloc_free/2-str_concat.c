#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1: string to concate
 * @s2: other string to concate
 *
 * Return: pointer to new string (Success), Null (Error)
*/

char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, i = 0;
	char *str3;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;
	str3 = malloc((len1 + len2) * sizeof(char) + 1);
	if (str3 == 0)
		return (0);

	for (i = 0; i <= len1 + len2; i++)
	{
		if (i < len1)
			str3[i] = s1[i];
		else
			str3[i] = s2[i - len1];
	}
	str3[i] = '\0';
	return (str3);
}


