#include<stdlib.h>
#include<stdio.h>
/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments
 * @argv: list of arguments
 *
 * Return: 0
 */


int main(int argc, char *argv[])
{
	int (*ptr_main)(int, char **) = main;
	int i;
	char *ptr = (char *)&ptr_main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < atoi(argv[1]); i++)
		printf("%02x\n", *(ptr + i));

	return (0);
}

