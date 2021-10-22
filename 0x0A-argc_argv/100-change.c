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

	if (argv[argc] == NULL || argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		amount = atoi(argv[1]);
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
	}
	return (0);
}
