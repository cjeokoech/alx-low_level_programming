#include <stdlib.h>
#include "main.h"
/**
 * read_textfile -  function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: file containing the text to be read
 * @letters: number of letters to be printed
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t  fd;
	char *buffer;
	ssize_t read_fd;
	ssize_t write_fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	read_fd = read(fd, buffer, letters);
	write_fd = write(1, buffer, read_fd);

		free(buffer);
		close(fd);
		return (write_fd);
}
