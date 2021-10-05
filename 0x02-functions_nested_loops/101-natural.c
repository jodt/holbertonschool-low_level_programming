#include<stdio.h>
/**
 * main - @computes and prints sum of all the multiples of 3 or 5 below 1024
 *
 * Return: result
 */
int main(void)
{
	int nb = 1024, i;
	int result = 0;

	for (i = 0; i <= nb; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			result += i;
	}
	printf("%d\n", result);
	return (0);
}
