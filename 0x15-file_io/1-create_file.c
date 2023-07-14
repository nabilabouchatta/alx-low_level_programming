#include "main.h"

/**
 *create_file --  function that creates a file.
 *@filename : the name of the file to create.
 *@text_content :  is a NULL terminated string to write to the file.
 *
 *Return: 1 on success, -1 on failure
 *if filename is NULL return -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int rw;
	int n = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (n = 0; text_content[n]; n++)
			;
	}

	wr = write(fd, text_content, n);

	if (wr == -1)
		return (-1);

	close(fd);

	return (1);
}
