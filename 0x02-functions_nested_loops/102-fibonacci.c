#include <stdio,h>

/**
 * main - print the frist 50 fibonacci numbers, strating with 1 and 2
 * followed by new line
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	long int i, j, k, next;

	j = 1;

	k = 2;

	for (i = 1; i <= 50; ++i)
	{
		if (j != 20365011074)
		{
			printf("%ld\n", j);
		} else
		{
			printf("%ld\n", j
		}
		next = j + k;
		j = k;
		k = next;
	}

	return (0);
}
