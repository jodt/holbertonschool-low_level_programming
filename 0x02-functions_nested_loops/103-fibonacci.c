#include<stdio.h>
int main(void)
{
	int compteur = 1;
	int fibonacci_1 = 1, temp;
	int64_t fibonacci_2 = 2;

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
