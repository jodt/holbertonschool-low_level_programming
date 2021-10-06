#include"main.h"
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: integer
 */
void print_times_table(int n)
{
	int first = 0, second, multiplication;

	if (n >= 0 && n <= 15)
		while (first <  n + 1)
		{
			second = 0;
			while (second < n + 1)
			{
				multiplication = first * second;
				if (multiplication >= 100)
					_putchar('0' + multiplication / 100);
				else if (second != 0)
					_putchar(' ');
			
				if (multiplication > 9)
					_putchar('0' + (multiplication / 10) % 10);
				else if (second != 0)
					_putchar(' ');

				_putchar('0' + multiplication  % 10);
				if (second < n)
				{
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar('\n');
				}	
				second++;
			}
			first++;
		}
}
