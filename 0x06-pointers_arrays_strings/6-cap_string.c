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
	char separator[] = "\n\t ,;.!?\":(){}";

	for (i = 0; separator[i]; i++)

	{
		for (j = 1; str[j]; j++)
		{
			if (str[j] == separator[i])
			{
				j++;
				if (str[j] > 96 && str[j] < 123)
					str[j] -= delt;
			}
			else
				str[j] = str[j];
		}
	}
	str[j] = '\0';
	return (str);
}
