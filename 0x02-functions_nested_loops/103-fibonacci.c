#include<stdio.h>
/**
 * main - finds and prints the sum of the even-valued the Fibonacci sequence
 * Return: return 0
 */
int main(void)
{
	long int x = 0, y = 1, i, somme = 0, evensum = 0;

	for (i = 0; i < 100; i++)
	{
		somme = x + y;
		if (somme > 4000000)
			break;
		if (somme % 2 == 0)
			evensum += somme;
		x = y;
		y = somme;
	}
	printf("%ld\n", evensum);
	return (0);
}
