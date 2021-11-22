#include"main.h"
void error(char *mode, char *name_file, int error_code);
/**
 * main - copies the content of a file to another file.
 * @argc: number of arguments
 * @argv: list of arguments
 *
 * Return: 0;
 */
int main(int argc, char **argv)
{
	int file_to, file_from, ch_read = BUFSIZE;
	char buf[BUFSIZE];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
		error("write", argv[2], 99);
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		error("read", argv[1], 98);
	while (ch_read > 0)
	{
		ch_read = read(file_from, buf, BUFSIZE);
		if (ch_read == -1)
			error("read", argv[1], 98);
		if (write(file_to, buf, ch_read) == -1)
			error("write", argv[2], 99);
	}
	if (close(file_to) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	if (close(file_from) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}


/**
 * error - print the error and exit
 * @mode : read, write or close
 * @name_file: name of the file ou fd
 * @error_code: int of the error code
 */
void error(char *mode, char *name_file, int error_code)
{
	dprintf(2, "Error : Can't %s to %s\n", mode, name_file);
	exit(error_code);
}
