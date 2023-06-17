#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print number of base 16
 *
 * Return: 0 (success)
*/

int main(void)
{
	int digit = 4;

	while (digit <= 102)
	{
		putchar(digit);
		digit += 39;
		digit++;
	}
	putchar('\n');
	return (0);
}
