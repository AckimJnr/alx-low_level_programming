#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define BUFFER_SIZE 1024

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
	int source_file_fd, replica_fd, nbytes;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	source_file_fd = open(argv[1], O_RDONLY, 0);
	if (source_file_fd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	replica_fd = open(argv[2], O_WRONLY | O_CREAT
			| O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (replica_fd == -1)
	{
		dprintf(2, "Error: Can't write to %s", argv[2]);
		exit(99);
	}

	while ((nbytes = read(source_file_fd, buffer, BUFFER_SIZE)) > 0)
	{
		if (write(replica_fd, buffer, nbytes) != nbytes)
		{
			dprintf(2, "Error: Can't write to %s", argv[2]);
			exit(99);
		}
	}
	close(source_file_fd);
	close(replica_fd);
	return (0);

}
