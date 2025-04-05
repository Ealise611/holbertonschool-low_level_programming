#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - add text at the end of the file.
 * @filename: The name of the file to be created.
 * @text_content: A pointer to the string to write to the file. Can be NULL.
 *
 * Return: 1 on success, or -1 on failure.
 * Do not create the file if it does not exist.
 * If filename is NULL return -1
 * If text_content is NULL, do not add anything to the file.
 * Then Return 1 if the file exists and -1 if the file does not exist,
 * or if you do not have the required permissions to write the file
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (0);
	}
	i = 0;

	while(text_content[i] != '\0')
		i++;
	bytes_written = write(fd, text_content, i);
	/*if write fails*/
	if (bytes_written == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}

