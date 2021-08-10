#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: Pointer
 * @letters: Numb of letters
 * Return: The actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t numberl = 0;
	char *buffer = NULL;
	int fd = 0; 
    int rd = 0;

	if (!filename)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	rd= read(fd, buffer, letters);

	if (rd == -1)
	{
		return (0);
	}

	numberl = write(STDOUT_FILENO, buffer, rd);
	free(buffer);
	close(fd);
	return (numberl);
}