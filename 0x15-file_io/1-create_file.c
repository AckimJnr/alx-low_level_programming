#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
/**
 * create_file - Creates a file and adds content to it
 * @filename: name of the file to be created
 * @text_content: content to fill the file
 *
 * Return: Returns a 1 if it is successful or else a -1 if it fails
 */
int create_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1 || filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	write(fd, text_content, strlen(text_content));

	close(fd);
	return (1);
}
