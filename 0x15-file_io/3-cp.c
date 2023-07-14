#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *buffer(char *filename);
void close_file(int file);

/**
 * buffer -- allocates 1024 bytes for a buffer
 *@filename: the name of the file buffer
 *Return: a pointer to the new allocated buffer
 */

char *buffer(char *filename)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);
	if (!buf)

	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (buf);
}
/**
 *close_file -- the function that close the file descriptor.
 *@file: the file descriptor to be closed
 *Return: void
 */

void close_file(int file)
{
	int a;

	a = close(file);
	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}
}

/**
 * main - copies from file to anotehr one.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, rd, wr;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff = buffer(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	rd = read(file_from, buff, 1024);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (file_from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}
		wr = write(file_to, buff, rd);
		if (file_to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}
		rd = read(file_from, buff, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (rd > 0);
	free(buff);
	close_file(file_from);
	close_file(file_to);

	return (0);
}
