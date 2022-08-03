#include "main.h"


/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: Filename to read and print
 * @letters: Number of letters it should read and print
 *
 * Return: The actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes_written;

	if (filename == NULL)
		return (0);

	bytes_written = write(STDOUT_FILENO, filename, letters);

	if (bytes_written == -1)
		return (0);

	return (bytes_written);
}
