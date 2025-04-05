#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <fcntl.h>

/**
 * read_textfile - Reads a text file and prints it to the standard output.
 * @filename: The name of the file to be read.
 * @letters: The number of letters to read and print from the file.
 *
 * Return: The actual number of letters it could read and print.
 *         If the file cannot be opened or read, return 0.
 *         If `filename` is NULL, return 0.
 *         If write fails or does not write the expected amount of bytes, return 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read;
	ssize_t bytes_written;
	char *buffer;

	/*edge case if filename is NULL return 0*/
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	/*if file cannot be opened return 0*/
	if (fd == -1)
		return (0);
	buffer = malloc(letters);
	if (buffter == NULL)
	{
		/*if malloc fails close file*/
		close(fd);
		return (0);
	}
	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
		/*handle error*/
	{
		free(buffer);
		close(fd);
		return (0);
	}
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written != bytes_read);
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (bytes_read);
}

