#include<stdio.h>
#include<stdlib.h>
/**
 * main - prints the minimum number of coins to make change for an amount
 * @argc: number of arguments
 * @argv: list of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int cents [5] = {25, 10, 5, 2, 1};
	int coins = 0, i = 0, temp, amount;

	amount = atoi(argv[1]);
	if (argc == 2)
	{
		if (atoi(argv[1]) < 0)
			printf("0\n");
		else
		{
			for (i = 0; i < 5; i++)
			{
				temp = amount / cents[i];
				amount -= temp * cents[i];
				if (temp)
					coins += temp;
			}
			printf("%d\n", coins);
		}
		return (0);
	}
	printf("Error\n");
	return (1);
}
