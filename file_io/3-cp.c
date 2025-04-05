#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

#define BUFFER_SIZE 1024

/**
 * main - Copies the content of one file to another.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of strings representing the arguments.
 *
 * Description: cp file_from file_to
 *
 * - If the number of arguments is incorrect, exits with code 97 and prints 
 *   "Usage: cp file_from file_to" to the standard error.
 * - If `file_to` already exists, it is truncated.
 * - If `file_from` does not exist, or cannot be read, exits with code 98 and prints
 *   "Error: Can't read from file NAME_OF_THE_FILE" to the standard error.
 *   where NAME_OF_THE_FILE is the first argument.
 * - If `file_to` cannot be created, or there is a failure when writing to it,
 *   exits with code 99 and prints "Error: Can't write to NAME_OF_THE_FILE" 
 *   to the standard error.
 * - If there is an error closing any file descriptor, exits with code 100 and prints
 *   "Error: Can't close fd FD_VALUE" to the standard error, where FD_VALUE is 
 *   the file descriptor value.
 * 
 * Permissions of the created file should be `rw-rw-r--`. If the file already 
 * exists, the permissions should remain unchanged.
 * 
 * The program reads 1024 bytes at a time from `file_from` to minimize system 
 * calls, using a buffer.
 * 
 * Return: 0 on success, exit with codes 97, 98, 99, or 100 on errors.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}
	/*open file_from for reading*/
	file_from = open(argv[1],O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO,"Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	/*open file_to for writing, create if needed, truncate if exist*/
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO,"Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	/*cp file*/
	bytes_read = read(file_from, buffer, BUFFER_SIZE);
	while (bytes_read > 0)
	{
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO,"Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		/*read the next chunk of the file*/
		bytes_read = read(file_from, buffer, BUFFER_SIZE);
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO,"Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}


