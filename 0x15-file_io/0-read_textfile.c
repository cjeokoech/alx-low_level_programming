#include "main.h"
#include <stdlib.h>
/**
 * read_textfile -  reads a text file and prints
 * it to the POSIX standard output.
 * @filename: text file being read
 * @letters: number of letters to read and print
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *ch;
ssize_t rt;
ssize_t i;
ssize_t j;
rt = open(filename, O_RDONLY);
if (rt == -1)
	return (0);
ch = malloc(sizeof(char) * letters);
i = read(rt, ch, letters);
j = write(STDOUT_FILENO, ch, i);
free(ch);
close(rt);
return (j);
}
