#include"main.h"
/**
 * print_number - print an integer
 * @n: integer to print
 */
void print_number(int n)
{
	int count = 0, temp, diviseur = 1;

	if (n < 0)
	{
		n = -nU;
		_putchar('-');
	}
	temp = n;
	while (temp > 9)
	{
		temp = temp / 10;
		count++;
		diviseur *= 10;
	}
	while (count >= 0)
	{
		temp = n / diviseur;
		_putchar('0' + temp);
		n -= (temp * diviseur);
		diviseur /= 10;
		count--;
	}
}
