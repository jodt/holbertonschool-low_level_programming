#include"main.h"
/**
 * read_textfile - reads a text file & prints it to the POSIX standard output.
 * @filename: text file
 * @letters : number of letters to print
 *
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t characters_number = 0;
	char *buff = malloc(sizeof(char) * (letters + 1));

	if (buff == NULL)
		return (0);

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	characters_number = read(fd, buff, letters);
	buff[letters + 1] = '\0';

	write(STDOUT_FILENO, buff, letters);
	free(buff);
	close(fd);
	return (characters_number);
}
