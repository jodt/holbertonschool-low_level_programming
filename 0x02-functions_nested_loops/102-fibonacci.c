#include<stdio.h>
/**
 * main - print 50 first fibonnaci number
 * Return: return 0
 */
int main(void)
{
	int compteur = 1;
	int fibonacci_1 = 1, temp;
	unsigned int fibonacci_2 = 2;

	printf("%d, ", fibonacci_1);
	compteur++;
	printf("%d, ", fibonacci_2);
	compteur++;
	while (compteur < 50)
	{
		temp = fibonacci_2;
		fibonacci_2 += fibonacci_1;
		fibonacci_1 = temp;
		printf("%d, ", fibonacci_2);
		compteur++;
	}
	printf("%d\n", fibonacci_2);
	return (0);
}
