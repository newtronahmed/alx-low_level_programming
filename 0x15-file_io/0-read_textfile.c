#include "main.h"
#include <fcntl.h>
/**
 * read_textfile - reads a text file and prints it
 * @filename: filename
 * @letters: letters
 * Return: size
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t bytes_read, bytes_written;
	int fd;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}

	bytes_read = read(fd, buffer, letters);
	if (bytes_read < 0)
	{
		free(buffer);
		return (0);
	}
	buffer[bytes_read] = '\0';
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written < 0)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);
	return (bytes_written);
}
