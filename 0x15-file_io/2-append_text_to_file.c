#include "main.h"
#include <string.h>
/**
 * append_text_to_file - append text to file
 *
 * @filename: filename
 * @text_content: text
 * Return: int
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;
	size_t text_count;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		text_count = strlen(text_content);
		bytes_written = write(fd, text_content, text_count);
		if (bytes_written < 0 || (size_t)bytes_written != text_count)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);

	return (1);
}
