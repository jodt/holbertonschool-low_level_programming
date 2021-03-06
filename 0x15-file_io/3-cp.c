#include"main.h"
/**
 * main - copies the content of a file to another file.
 * @argc: number of arguments
 * @argv: list of arguments
 *
 * Return: 0;
 */
int main(int argc, char **argv)
{
	int file_to, file_from, ch_read;
	char buf[BUFSIZE];


	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		exit(error_display(argv[1], 98));
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
		exit(error_display(argv[2], 99));
	while ((ch_read = read(file_from, buf, BUFSIZE)) != 0)
	{
		if (ch_read == -1)
			exit(error_display(argv[1], 98));
		if (write(file_to, buf, ch_read) == -1)
			exit(error_display(argv[2], 99));
	}
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);
	}
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);
	}
	return (0);
}

/**
 * error_display - print error message
 * @file_name: name of file
 * @error_code: error code
 *
 * Return: error code
 */
int error_display(char *file_name, int error_code)
{
	if (error_code == 98)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_name);
	if (error_code == 99)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_name);
	return (error_code);
}
