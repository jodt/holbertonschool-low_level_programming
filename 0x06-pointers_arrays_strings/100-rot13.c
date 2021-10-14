#include"main.h"
/**
 * rot13 - encodes string in rot 13
 * @str: string
 *
 * Return: pointer of string encoded
 */
char *rot13(char *str)
{
	int i, j;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; str[i]; i++)
	{
		for (j = 0; alphabet[j]; j++)
		{
			if (alphabet[j] == str[i])
			{
				str[i] = rot13[j];
				break;
			}
		}
	}
	str[i] = '\0';
	return (str);
}
