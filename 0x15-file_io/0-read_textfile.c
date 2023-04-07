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
	char buffer[letters];
	ssize_t bytes_read, bytes_written;
	int fd;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	while ((bytes_read = read(fd, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
		if (bytes_written == -1)
			return (0);
	}
	if (bytes_read = -1)
	{
		return (0);
	}
	close(fd);
	return (bytes_written);	
}
