#include "main.h"
#include <string.h>
/**
 * create_file - creates a file
 * @filename: file to create
 * @text_content: text to be written to file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w_val;
	size_t len;

	if (filename == NULL)
		return (-1);

	fd = open(filename,  O_RDWR | O_TRUNC | O_CREAT, 0600);
	if (fd < 0)
		return (-1);

	len = strlen(text_content);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	w_val = write(fd, text_content, len);
	if (w_val < 0)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
