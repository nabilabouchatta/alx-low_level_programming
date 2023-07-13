#include "main.h"

/**
 * read_textfile --  reads a text file and
 * prints it to the POSIX standard output
 * @filename: pointer filename
 * @letters: is the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t rd, wr;
	int file;
	char *buffer;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (buffer == NULL)
		return (0);


	rd = read(file, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);
close(file);
free(buffer);
return (wr);
}
