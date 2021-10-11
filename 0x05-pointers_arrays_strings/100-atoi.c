#include"main.h"
/**
 * _atoi - convert a string to an integer
 * @s: string
 *
 *Return: integer
 */
int _atoi(char *s)
{
	int i, exponent = 0, number = 0, position_first_integer = 0;
	
	for (i = 0; s[i]; i++)
	{
		if (s[i] > 45){
			position_first_integer = i;
			break;
		}
	}
	i = 0;
	for (i = 0; s[i]; i++)
	{
		if (s[i] > 47 && s[i] < 58)
			exponent++;
	}         
        i = 0;
	for (i = 0; s[i]; i++)
	{
		if (s[i] > 47 && s[i] < 58)
		{
			while (exponent > 1)
			{
				number += (s[i] - 48) * 10;
				exponent--;
				i++;
			}
			number += (s[i] - 48);
			if (s[position_first_integer - 1] == 45)
			{
			number = -number;
			}
		}
		return (number);
	}
}
