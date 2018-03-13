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
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: a NULL terminated string to write
 * to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int len;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	len = _strlen(text_content);

/*create a file*/
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

/*write text_context to filename*/
	write(fd, text_content, len);
	close(fd);
	return (1);
}
