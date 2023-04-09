#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - copy file to another
 *
 * @argc: aguments number
 * @argv: arguments pointers
 *
 * Return: Always 0
 */
void close_file(int fd)
{
	if (close(fd) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd);
		exit(100);
	}
}
int main(int argc, char *argv[])
{
	int fd_to, fd_from;
	char buffer[1024];
	ssize_t bytes_written, bytes_read;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);

	if (fd_from < 0)
	{
		close_file(fd_from);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to < 0)
	{
		close_file(fd_to);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	/* if both files successfully open, only then do we proceed */
	if ((fd_from >= 0) && (fd_to >= 0))
	{
		/** read maximum of 1024 bytes
		 * bytes_read is the number of bytes read
		 * while bytes_read is greater than zero means
		 * while we are'nt at the end of the file or 
		 * while we didn't geta negative value which indicates
		 * an error
		 * Contunue to read to  buffer
		 */
		while ((bytes_read = read(fd_from, buffer, 1024)) > 0)
		{
			bytes_written = write(fd_to, buffer, bytes_read);
			if (bytes_written < 0 || bytes_written != bytes_read)
			{
				close_file(fd_from);
				close_file(fd_to);
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
				exit(99);
			}
		}

	}

	if (bytes_read < 0)
	{
		close_file(fd_from);
		close_file(fd_to);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	close_file(fd_from);
	close_file(fd_to);

	return (0);
}
