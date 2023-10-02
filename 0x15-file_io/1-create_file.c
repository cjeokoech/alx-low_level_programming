#include "main.h"
/**
 * create_file - create file
 * @filename: name of the file to create
 * @text_content: text contained in filename
 * Return: 1 on success or -1 on fail
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write_fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	write_fd = write(fd, text_content, strlen(text_content));
	if (write_fd == -1 || fd == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
