#include "main.h"

/**
 * read_textfile - reads text file and prints it to POSIX standard output.
 * @letters: number of letters it should read and print.
 * @filename: file to print/read
 * Return: actual number of letters it could read and print or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int nr, fd, wv;
	char *c = malloc(sizeof(char) * letters);

	if (c == NULL || filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		free(c);
		return (0);
	}
	nr = read(fd, c, letters);
	if (nr < 0)
	{
		free(c);
		return (0);
	}
	wv = write(STDOUT_FILENO, c, nr);
	if (wv < 0)
	{
		free(c);
		return (0);
	}
	return ((ssize_t)wv);
}
