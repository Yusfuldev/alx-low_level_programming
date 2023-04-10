#include "main.h"
#include <string.h>

/**
 * append_text_to_file - appends text to a file
 * @filename: file to append to
 * @text_content: text to append
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
        int fd, w_val;
        size_t len;

        if (filename == NULL)
                return (-1);

        fd = open(filename, O_RDWR | O_APPEND);
        if (fd < 0)
                return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	len = strlen(text_content);

	w_val = write(fd, text_content, len);

	if (w_val < 0)
        {
                close(fd);
                return (-1);
        }

        close(fd);
        return (1);
}
