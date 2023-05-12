#include "main.h"

/**
 * append_text_to_file -appends text at the end of a file
 * @filename: the filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the file does not exit
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op;
	int letters;
	int wr;

	if (!filename)
		return (-1);

	op = open(filename, O_WRONLY | O_APPEND);

	if (op == -1)
		return (-1);

	if (text_content)
	{
		for (letters = 0; text_content[letters]; letters++)
			;

		wr == write(op, text_content, letters);

		if (wr == -1)
			return (-1);
	}

	close(op);

	return (1);
}
