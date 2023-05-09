#include <stdio.h>
#include <string.h>
#include <fnctl.h>

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
	char buffer[1024];
	char *file_from_name, *file_to_name;
	int file_from, file_to;
	size_t bytesR;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	strcpy(file_from_name, argv[1]);
	strcpy(file_to_name, argv[2]);

	file_from = open(file_from_name, O_RDONLY);

	if (file_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file_to = open(file_to_name, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (file_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while (bytesR = read(buffer, sizeof(char), 1024, from_file))
		write(buffer, sizeof(char), bytesRead, to_file);
	return (0);
}
