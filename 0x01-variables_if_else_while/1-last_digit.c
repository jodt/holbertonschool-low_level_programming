#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - check if last digit of a number is >5, or <6 and != 0, or equal to 0
 * @n: The number to be checked
 *
 * Return: return 0
 */
int main(void)
{
	int n;
	int digit = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, digit);
	}
	else if (digit < 6 && digit != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, digit);
	}
	else
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, digit);
	}
	return (0);
}
