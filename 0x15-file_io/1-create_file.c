#include"main.h"
/**
 * create_file - creates a files
 * @filename: name of the file created
 * @text_content: string to save in the file
 *
 * Return: 1 if success, -1 if it's fail
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i = 0;
	char *buf;

	if (filename == NULL)
		return (-1);
	while (text_content[i])
	{
		i++;
	}
	buf = malloc(sizeof(char) * i);
	if (buf == NULL)
		return (-1);
	for (i = 0; text_content[i]; i++)
		buf[i] = text_content[i];
	buf[i] = '\0';
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (write(fd, buf, i) == -1)
		return (-1);
	close(fd);
	free(buf);
	return (1);
}
