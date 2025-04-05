#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - Creates a new file and writes a NULL-terminated string to it.
 * @filename: The name of the file to be created.
 * @text_content: A pointer to the string to write to the file. Can be NULL.
 *
 * Return: 1 on success, or -1 on failure.
 * - If the file cannot be created, written to,
 *   or if there is an error during write, return -1.
 * - If `filename` is NULL, return -1.
 * - If `text_content` is NULL, create an empty file.
 * - If the file already exists,
 *   it will be truncated but the permissions will remain unchanged.
 * - The created file must have permissions of rw-------
 *   (read and write for the owner only).
 */

int create_file(const char *filename, char *text_content)
{
	int fd, fdw, s = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		open(filename, O_CREAT, 0600);
	}

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		while (text_content[s])
			s++;
		fdw = write (fd, text_content, s);
		if (fdw != s)
			return (-1);
	}
	close(fd);
	return (1);
}

