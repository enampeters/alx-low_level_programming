/*
 * File: 2-append_text_to_file.c
 * Auth: Nyavor E Peter
 */
#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file
 * @text_content: The string to add to the end of the file
 *
 * Return: -1 if function fails or filename is NULL or file
 *	does not exist or user lacks write permissions
 *	else 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (0 == -1 || w == -1)
		return (-1);
	close(o);

	return (1);
}