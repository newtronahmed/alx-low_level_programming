#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

/**
  * close_file - closes a given file description
  * @fd: fd
  * Return: void
  */
void close_file(int fd)
{
	if (close(fd) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd);
		exit(100);
	}
}
/**
 * cant_read - cannot read file procedure
 * @fd_from: from
 * @fd_to: to
 * @argv: argv
 * Return: void
 */
void cant_read(int fd_from, int fd_to, char *argv)
{
	close_file(fd_to);
	close_file(fd_from);
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv);
	exit(98);

}
/**
 * cant_write- cannot write file procedure
 * @fd_to: to
 * @argv: argv
 * Return: void
 */
void cant_write(int fd_to, char *argv)
{
	close_file(fd_to);
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv);
	exit(99);
}
/**
 * main - copy file to another
 *
 * @argc: aguments number
 * @argv: arguments pointers
 *
 * Return: Always 0
 */
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
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	if (fd_to < 0)
	{
		cant_write(fd_to, argv[2]);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from < 0)
	{
		cant_read(fd_from, fd_to, argv[1]);
	}
	while ((bytes_read = read(fd_from, buffer, 1024)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written < 0 || bytes_written != bytes_read)
		{
			close_file(fd_from);
			cant_write(fd_to, argv[2]);
		}
	}
	if (bytes_read < 0)
	{
		cant_read(fd_from, fd_to, argv[1]);
	}
	close_file(fd_from);
	close_file(fd_to);
	return (0);
}
