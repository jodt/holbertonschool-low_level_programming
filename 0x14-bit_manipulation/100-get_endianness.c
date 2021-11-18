#include"main.h"
/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big indian, 1 if little endian
 */
int get_endianness(void)
{
	int x = 10;
	char *y = (char *)&x;

	return (*y + '0');
}
