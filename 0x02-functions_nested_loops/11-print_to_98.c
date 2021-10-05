#include"main.h"
#include<stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: integer
 */
void print_to_98(int n)
{
	int max = 98, i, j;

	if (n >= max)
	{
		for (i = n; i > max; i--)
		{
			printf("%d, ", i);
		}
		printf("%d", i);
		printf("\n");
	}
	else
	{
		for (j = n; j < max; j++)
		{
			printf("%d, ", j);
		}
		printf("%d", j);
		printf("\n");
	}
}
