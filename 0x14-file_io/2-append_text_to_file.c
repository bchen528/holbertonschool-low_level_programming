#include "holberton.h"

/**
 * _strlen - find string length
 * @s: string to be assessed
 * Return: length of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * append_text_to_file - appends a text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at
 * end of file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int len;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	len = _strlen(text_content);

	fd = open(filename, O_WRONLY | O_APPEND, 0200);
	if (fd == -1)
		return (-1);

/*open and append text_context at end of file*/
	write(fd, text_content, len);
	close(fd);

	return (1);
}
