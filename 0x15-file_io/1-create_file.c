#include "main.h"

/**
 * create_file -crates a file
 * @filename: filename.
 * @text_content: the content writed in the file.
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int op, letters, wr;

	if (!filename)
		return (-1);

	op = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (op == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (letters = 0; text_content[letters]; letters++)
		;

	wr = write(op, text_content, letters);

	if (rw == -1)
		return (-1);

	close(op);

	return (1);
}
