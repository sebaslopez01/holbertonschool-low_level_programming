#include "main.h"


/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: Filename to append the text
 * @text_content: Content to append to the file
 *
 * Return: 1 on success, -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	fd = open(filename, O_WRONLY | O_APPEND, 00200);
	if (fd == -1)
		return (-1);

	bytes_written = write(fd, text_content, strlen(text_content));
	if (bytes_written == -1)
		return (-1);

	close(fd);

	return (1);
}
