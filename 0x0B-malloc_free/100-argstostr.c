#include<stdlib.h>
#include"main.h"
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: numbers of arguments
 * @av: list of arguments
 *
 *Return: pointer of string
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	int i, j, k = 0, size = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		size += (_strlen(av[i]) + 1);
	ptr = malloc((size + 1) * sizeof(char));
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
			ptr[k] = av[i][j];

		ptr[k++] = '\n';
	}
	ptr[k] = '\0';
return (ptr);
}
/**
 * _strlen - returns the length of a string
 * @s: the string
 * Return: the length;
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
		count++;
	return (count);
}

