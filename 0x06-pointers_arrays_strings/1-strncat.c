#include"main.h"
/**
 * _strncat - concatenates two strings using at most n bytes from src
 * @dest: destination
 * @src: source
 * @n: n bytes from src to concatenate
 *
 *Return: pointer with concatenate string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i]; i++)
		;
	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[i + j] = src[j];
	dest[i + j] = '\0';
	return (dest);
}
