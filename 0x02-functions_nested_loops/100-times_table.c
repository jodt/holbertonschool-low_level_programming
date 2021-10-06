#include"main.h"
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: integer
 */
void print_times_table(int n)
{
	int first = 0, second, compteur, multiplication;

	if (n <= 0 || n >= 15)
	{
		_putchar('\0');
	}
	else
	{
		while (first <  n + 1)
		{
			second = 0;
			compteur = 0;
			while (second < n + 1)
			{
				multiplication = first * second;
				compteur != 0 ? _putchar(' ') : '\0';
				if (multiplication >= 100)
				{
					_putchar('0' + multiplication / 100);
					_putchar('0' + multiplication / 10 % 10);
					_putchar('0' + multiplication % 10);
				}
				if (multiplication > 9 && multiplication < 100)
				{
					_putchar(' ');
					_putchar('0' + multiplication / 10);
					_putchar('0' + multiplication % 10);
				}
				if (multiplication < 10)
				{	
					if (compteur > 0)
					{
						_putchar(' ');
						_putchar(' ');
					}
					_putchar('0' + multiplication  % 10);
				}
				compteur < n ? compteur++, _putchar(',') : _putchar('\n');
				second++;
			}
			first++;
		}
	}
}
