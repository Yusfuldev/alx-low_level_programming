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
	int src, dest;
	ssize_t read_val, w_val;
	char buff[1024];

	if (argc < 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	src = open(argv[1], O_RDONLY);
	if (src < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file \"%s\"\n", argv[1]);
		exit(98);
	}

	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (dest < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to \"%s\"\n", argv[2]);
		exit(99);
	}

	read_val = read(src, buff, sizeof(buff));
	while (read_val > 0)
	{
		w_val  = write(dest, buff, read_val);
		if (w_val < 0)
		{
			_close(dest);
			dprintf(STDERR_FILENO, "Error: Can't write to \"%s\"\n", argv[2]);
		}
		read_val = read(src, buff, sizeof(buff));
	}
		if (argv[1] == NULL || read_val < 0)
		{
			_close(src);
			dprintf(STDERR_FILENO, "Error: Can't read from file \"%s\"\n", argv[1]);
		}
	close(src);
	close(dest);
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
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	return (error);
}
