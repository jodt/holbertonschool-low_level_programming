#include"main.h"
#include<stdio.h>
/**
 * _atoi - convert a string to an integer
 * @s: string
 *
 *Return: integer, 0 if not integer
 */
int _atoi(char *s)
{
	int i, is_integer = 0, nombre = 0, sign = 1, first_digit = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] > 47 && s[i] < 58)
		{
			first_digit = i;
			is_integer++;
			break;
		}
	}
	if (is_integer == 0)
		return (0);
	i = 0;
	for (i = 0; s[i]; i++)
	{
		if (s[i] > 47 && s[i] < 58)
		{
			nombre = nombre * 10 + (s[i] - '0');
		if ((s[i + 1] < 47) || (s[i] + 1 > 58))
			break;
		}
	}
	if (s[first_digit - 1] == 45)
		sign = -1;
	nombre = nombre * sign;
	return (nombre);
}
