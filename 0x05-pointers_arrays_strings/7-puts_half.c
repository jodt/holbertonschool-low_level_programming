#include"main.h"
/**
 * puts_half - prints half of a string, followed by a new line
 * @str: sting
 */

void puts_half(char *str)
{
	int middle, end = 0, j;

	for (end = 0; str[end]; end++)
		;
	if (end % 2 == 0)
		middle = end / 2;
	else
		middle = (end / 2) + 1;

	for (j = middle; j < end; j++)
		_putchar(str[j]);
	_putchar('\n');
}
