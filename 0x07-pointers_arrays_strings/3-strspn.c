#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 *
 * @s: str to evaluate
 * @accept: str containing the list of characters to match in s
 *
 * Return: the number of byte in initial segment
 * of s which consist only of byte from accept
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, j, k, flag;

	k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			return (f);
		}
	}

	return (0);
}
