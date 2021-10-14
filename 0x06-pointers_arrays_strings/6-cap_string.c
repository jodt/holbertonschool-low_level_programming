#include"main.h"
/**
 * cap_string - capitalizes all words of a string
 * @str: string
 *
 * Return: pointer of string with all word capitalized
 */
char *cap_string(char *str)
{
	int i, j, delt = 'a' - 'A';
	char separator[] = " \t\n,;.!?\"(){}";

	for (i = 0; str[i]; i++)
	{
		for (j = 0; separator[j]; j++)
		{
			if (str[0] > 96 && str[0] < 123)
				str[0] -= delt;
			if (str[i - 1] == separator[j] && str[i] > 96 && str[i] < 123)
			{
				str[i] -= delt;
			}
		}
	}
	str[i] = '\0';
	return (str);
}
