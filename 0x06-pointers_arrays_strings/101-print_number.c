#include"main.h"
/**
 * print_number - prints an integer
 * @n : integer
 */
void print_number(int n)
{
	unsigned int temp = 0;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	temp = n % 10;
	n = (n - temp);
	if (n)
	{
		print_number(n / 10);
	}
	_putchar(temp + '0');
}
