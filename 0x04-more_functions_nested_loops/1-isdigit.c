#include"main.h"
/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: integer to check
 *
 * Return: 1 if digit
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
