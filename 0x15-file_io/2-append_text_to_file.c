#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
/**
 * append_text_to_file - Appends text to a file
 * @filename: name of the file to be created
 * @text_content: text to be appended
 *
 * Return: Returns a 1 if it is successful or else a -1 if it fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (text_content == NULL)
		return (1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1 || filename == NULL)
		return (-1);
	write(fd, text_content, strlen(text_content));

	close(fd);
	return (1);
}
