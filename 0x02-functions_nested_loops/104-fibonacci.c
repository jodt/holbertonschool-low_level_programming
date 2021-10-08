#include<stdio.h>
/**
 * main -  prints the first 98 Fibonacci numbers, starting with 1 and 2
 * Return: return 0
 */
int main(void)
{
	unsigned long int x = 0, y = 1, somme = 0;
	int i;

	for (i = 0; i < 98; i++)
	{
		somme = x + y;
		if (i != 97)
			printf("%lu, ", somme);
		else
			printf("%lu\n", somme);
		x = y;
		y = somme;
	}
	return (0);
}
