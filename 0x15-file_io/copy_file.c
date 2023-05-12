#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#define BUFFER_SIZE 1024
/**
 * copy_file - copies the contents of a file to another file
 * @source_file_fd: file descriptor of the source file
 * @replica_fd: fd of the copied file
 * @buffer: buffer size
 * @argv: arguments passed
 *
 * Return: Returns void
 */
void copy_file(int source_file_fd, int replica_fd, char buffer[], char *argv[])
{
	int nbytes, write_fd;

	while ((nbytes = read(source_file_fd, buffer, BUFFER_SIZE)) > 0)
	{
		write_fd = write(replica_fd, buffer, nbytes);
		if (write_fd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (nbytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	if (close(source_file_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source_file_fd);
		exit(100);
	}
	if (close(replica_fd) == 1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", replica_fd);
		exit(100);
	}
}
