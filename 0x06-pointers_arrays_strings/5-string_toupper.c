#include"main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @str: string to convert
 *
 * Return: pointer of string in uppercase
 */
char *string_toupper(char *str)
{
	int i, delt = 'a' - 'A';

	for (i = 0; str[i]; i++)
	{
		if (str[i] > 96 && str[i] < 123)
			str[i] -= delt;
		else
			str[i] = str[i];
	}
	str[i] = '\0';
	return (str);
}
