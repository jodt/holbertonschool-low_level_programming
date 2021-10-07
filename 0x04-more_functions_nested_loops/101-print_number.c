#include"main.h"
/**
 * print_number - print an integer
 * @n: integer to print
 */
void print_number(int n)
{
	int count = 0, diviseur = 1;
	unsigned int temp, temp_2;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	temp = n;
	temp_2 = n;
	while (temp > 9)
	{
		temp = temp / 10;
		count++;
		diviseur *= 10;
	}
	while (count >= 0)
	{
		temp = temp_2 / diviseur;
		_putchar('0' + temp);
		temp_2 -= (temp * diviseur);
		diviseur /= 10;
		count--;
	}
}
