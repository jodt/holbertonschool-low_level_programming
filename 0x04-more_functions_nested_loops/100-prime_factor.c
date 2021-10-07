#include<stdio.h>
/**
 * prime_factor - print le largest prime factor of a number
 * Return: return 0
 */
int main(void)
{
	long int i;
	long int num = 612852475143;

	for (i = 2; num > 1; i++)
	{
		while (num % i == 0)
		{
			num = num / i;
		}
	}
	printf("%ld\n",i);
	return (0);
}
