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
	int fd,  characters_number = 0;
	char *buff;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	characters_number = read(fd, buff, letters);
	close(fd);
	if (write(STDOUT_FILENO, buff, characters_number) == -1)
		return (0);
	free(buff);
	return (characters_number);
}
