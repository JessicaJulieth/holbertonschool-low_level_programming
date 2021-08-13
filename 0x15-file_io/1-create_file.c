#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: Name de file
 * @text_content: Pointer
 *
 * Return: Filename is NULL return -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd = 0;
	int size = 0;
	int  w;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	while (text_content[size])
	{
		size++;
	}
	w = write(fd, text_content, size);
	if (w == -1)
		return (-1);

	close(fd);
	return (1);
}
