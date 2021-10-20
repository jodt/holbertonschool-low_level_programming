#include"main.h"
/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: string
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (!(s[i]))
	{
		_putchar('\n');
		return;
	}
	_putchar(s[i]);
	i++;
	_puts_recursion(s + i);
}
