#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print 0-9 useing putchar
 * while useing int var
 *
 * Return: 0 (success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar('digit + '0');
		digit++;
	}
	putchar('\n);

	return (0);
}
