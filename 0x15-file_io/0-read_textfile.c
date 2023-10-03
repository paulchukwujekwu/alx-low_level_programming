#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- function reads text file, prints to the POSIX standard output
 * @filename: text file to be read
 * @letters: number of letters being read
 * Return: w- actual number of bytes to read and print
 *        0 if function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
