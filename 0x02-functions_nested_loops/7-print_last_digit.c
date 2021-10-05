#include"main.h"
/**
 * print_last_digit -  prints the last digit of a number
 * @x: number to check
 * Return: value of the last digit
 */
int print_last_digit(int x)
{
	int result;

	result = (x % 10);
	if (result < 0)
		result = -result;
	_putchar('0' + result);
	return (result);
}
