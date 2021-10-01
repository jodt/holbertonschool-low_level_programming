#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - function which displays if number is negative ,positive or equal to 0
 * @n: the number to be checked
 *
 * Return: return 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
