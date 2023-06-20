#include "main.h"

/**
 * main - Entery point
 *
 * Description: print _putchar with newline
 *
 * Return: 0 (success)
*/

int main(void)
{
	char str[] = "_putchar";

	int x;

	for (x = 0, x < 8, x++)
		_putchar(str[x]);
	_putchar('\n');

	return (0);
}
