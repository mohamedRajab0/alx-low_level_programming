#include <stdio.h>

/**
 * main - Entery point
 *
 * Description: print all aplhabet letter
 *
 * Return: 0 (success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
