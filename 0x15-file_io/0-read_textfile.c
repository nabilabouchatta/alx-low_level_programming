#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: the filename
 * @letters: numbers of letters printd.
 *
 * Return: numbers of letters printed. It fails, retruns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int op;
	ssize_t re, wr;
	char *buffer;

	if (!filename)
		return (0);

	op = open(filename, O_RDONLY);

	if (op == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);
	rd = read(op, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);
	close(op);

	free(buffer);
	return (wr);
}
