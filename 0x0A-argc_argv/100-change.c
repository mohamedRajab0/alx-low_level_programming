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
	if (argc == 2)
	{
	int i, le = 0, money = atoi(argv[1]);
	int cents[] = {25, 10, 5, 2, 1};

	for (i = 0; i < 5; i++)
	{
		if (money >= cents[i])
		{
			le += money / cents[i];
			money = money % cents[i];
			if (money % cents[i] == 0)
			{
				break;
			}
		}
	}
	printf("%d\n", le);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
