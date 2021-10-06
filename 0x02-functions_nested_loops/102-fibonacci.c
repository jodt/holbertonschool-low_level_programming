#include<stdio.h>
/**
 * main - print 50 first fibonnaci number
 * Return: return 0
 */
int main(void)
{
	int i = 0;
	unsigned long int fibonacci_1 = 1, temp;
	unsigned long int fibonacci_2 = 2;

	printf("%lu, ", fibonacci_1);
	i++;
	printf("%lu, ", fibonacci_2);
	i++;
	for (i = 2; i < 50; i++)
	{
		temp = fibonacci_2;
		fibonacci_2 += fibonacci_1;
		fibonacci_1 = temp;
		if (i == 49)
		{
			printf("%lu\n", fibonacci_2);
		}
		else
		{
			printf("%lu, ", fibonacci_2);
		}
	}
	return (0);
}
