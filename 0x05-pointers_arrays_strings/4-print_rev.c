
#include"main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string
 */
void print_rev(char *s)
{
	int i, j;

	for (i = 0; s[i]; i++)
		;
	j = i - 1;
	while (j >= 0)
	{
		_putchar(s[j]);
		j--;
	}
	_putchar('\n');
}
