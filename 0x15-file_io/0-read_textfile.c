#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: m- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t f;
	ssize_t m;
	ssize_t n;

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	n = read(f, buf, letters);
	m = write(STDOUT_FILENO, buf, n);

	free(buf);
	close(f);
	return (m);
}
