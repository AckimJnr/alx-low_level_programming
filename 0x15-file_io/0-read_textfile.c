#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * read_textfile - Reads contents of a text file and prints to posix std out
 * @filename: name of the file to be read
 * @letters: number of letters to be printed
 *
 * Return: Returns the number of printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff = malloc(sizeof(char) * letters);
	int fd = open(filename, O_RDONLY);
	ssize_t printed_letters;

	if (fd == -1)
		return (0);

	printed_letters = read(fd, buff, letters);
	write(STDOUT_FILENO, buff, printed_letters);

	if (close(fd) == -1)
		return (0);

	return (printed_letters);
}
