#include"main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int first_number = 0, second_number, multiplication, dizaine, unite;
	int compteur;

	while (first_number < 10)
	{
		second_number = 0;
		compteur = 0;
		while (second_number < 10)
		{
			multiplication = first_number * second_number;
			if (multiplication > 9)
			{
				dizaine = multiplication / 10;
				unite = multiplication % 10;
				_putchar('0' + dizaine);
				_putchar('0' + unite);
				}
			else
			{
			_putchar('0' + multiplication);
			}
			second_number++;
			compteur++;
			if (compteur == 10)
			{
				_putchar('\n');
			}
			else if (multiplication > 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else if (multiplication < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		first_number++;
	}
}
