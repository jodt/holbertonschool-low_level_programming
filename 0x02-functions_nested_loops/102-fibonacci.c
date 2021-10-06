#include<stdio.h>
/**
 * main - print 50 first fibonnaci number
 * Return: return 0
 */
int main(void)
{
	int compteur = 1;
	unsigned long int fibonacci_1 = 1, temp;
	unsigned long int fibonacci_2 = 2;

	printf("%lu, ", fibonacci_1);
	compteur++;
	printf("%lu, ", fibonacci_2);
	compteur++;
	while (compteur < 50)
	{
		temp = fibonacci_2;
		fibonacci_2 += fibonacci_1;
		fibonacci_1 = temp;
		printf("%lu, ", fibonacci_2);
		compteur++;
	}
	printf("%lu\n", fibonacci_2);
	return (0);
}
