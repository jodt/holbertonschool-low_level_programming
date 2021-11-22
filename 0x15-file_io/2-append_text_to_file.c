#include"main.h"
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file
 * @text_content: string to save in the file
 *
 * Return: 1 if success, -1 if fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 0;
	char *buf;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content ==  NULL)
		return (1);
	while (text_content[i])
		i++;
	buf = malloc(sizeof(char) * i);
	if (buf == NULL)
		return (-1);
	for (i = 0; text_content[i]; i++)
		buf[i] = text_content[i];
	if (write(fd, buf, i) == -1)
	{
		free(buf);
		return (-1);
	}
	close(fd);
	free(buf);
	return (1);
}
