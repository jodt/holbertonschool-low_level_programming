#include <stdio.h>
/**
 * main - prints the alphabet in lowercase except q and e
 * Return: return 0
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i == 'e' || i == 'q')
			continue;
		putchar(i);
	}
	putchar('\n');
	return (0);
}
