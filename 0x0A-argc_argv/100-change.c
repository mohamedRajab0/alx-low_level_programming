#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money.
 * @argc : nember of arguments
 * @argv: array of arguments
 *
 * return: 0 (Success), 1 (Error)
*/

int main(int argc, char *argv[])
{
	int i, j, money;
	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	money = 0;

	if (i < 0)
	{
		printf("0\n");
		return (0);
	}

	for (j = 0; j < 5 && i >= 0; j++)
	{
		while (i >= cents[j])
		{
			money++;
			i -= cents[j];
		}
	}

	printf("%d\n", money);
	return (0);
}
