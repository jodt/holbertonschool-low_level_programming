#include<stdio.h>
/**
 * lett - encodes a string into 1337
 * @str: string
 *
 * Return: pointer to string encoded
 */
char *leet(char *str)
{
	int i, j;
	char letters[] = "aAeEoOtTlL";
	char leet[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; letters[i]; i++)
	{
		for (j = 0; str[j]; j++)
		{
			if (str[j] == letters[i])
				str[j] = leet[i];
			else
				str[j] = str[j];
		}
	}
	str[j] = '\0';
	return (str);
}
