
#include"main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
