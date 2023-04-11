#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int _close(int fd);

/**
 * main - Entry point to copy files
 * @argc: number of passed arguments
 * @argv: pointers to array arguments
 * Return: 0 exit on failure.
 */


int main(int argc, char *argv[])
{
	char buffer[1024];
	int bytes_read = 0, nr = 1, src= -1, dest = -1, error = 0;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	src = open(argv[1], O_RDONLY);
	if (src < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	dest = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (src < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		_close(src);
		exit(99);
	}

	while (nr)
	{
		nr = read(src, buffer, 1024);
		if (nr < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			_close(src);
			_close(dest);
			exit(98);
		}
		else if (nr == 0)
			break;
		bytes_read += nr;
		error = write(src, buffer, nr);
		if (error < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			_close(src);
			_close(dest);
			exit(99);
		}
	}
	return (0);
}

/**
 * _close - closes a file and prints error.
 * @fd: Descriptor for closed file
 * Return: 1 on success, -1 on failure
 */

int _close(int fd)
{

	int error;

	error = close(fd);
	if (error < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	return (error);
}
