#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#define BUFFER_SIZE 1024
void copy_file(int, int, char buffer[], char *argv[]);
/**
 * main - a c program to copy the contents of one file to another
 * @argc: arguments count
 * @argv: names of the from and to file will be captured here
 * begining with the source file
 *
 * Return: Returns a 0 on successful execution or exits with error code 98
 */
int main(int argc, char *argv[])
{
	int source_file_fd, replica_fd;
	char buffer[BUFFER_SIZE];
	mode_t fileMode = 0664;
	mode_t oldMask = umask(0000);

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	source_file_fd = open(argv[1], O_RDONLY, 0);
	if (source_file_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	replica_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, fileMode);
	umask(oldMask);
	if (replica_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	copy_file(source_file_fd, replica_fd, buffer, argv);

	return (0);

}
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
		if (write_fd != nbytes)
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
