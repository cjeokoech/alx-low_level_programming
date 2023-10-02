#include "main.h"
/**
 * append_text_to_file - append text at the end of file
 * @filename:file containing text
 * @text_content: text contained in file
 * Return: 1 on success and -1 on fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	ssize_t write_fd;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	write_fd = write(fd, text_content, len);
	if (write_fd == -1)
		return (-1);
	close(fd);
	return (1);
}

