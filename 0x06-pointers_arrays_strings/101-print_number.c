#include"main.h"
/**
 * print_number - prints an integer
 * @n : integer
 */
void print_number(int n)
{
	unsigned int temp = 0;
	unsigned int n1;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	n1 = n;
	temp = n1 % 10;
	n1 = (n1 - temp);
	if (n1)
	{
		print_number(n1 / 10);
	}
	_putchar(temp + '0');
}
