#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to POSIX stdout
 * @filename: file
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	int actual;

	buf = malloc(sizeof(char) * letters + 1);
	if (buf == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	if (letters <= 0)
		return (0);
/*read*/
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	actual = read(fd, buf, letters);
	buf[letters] = '\0';

	close(fd);
/*write*/
	fd = open(filename, O_CREAT | O_WRONLY, 0600);

	if (fd == -1)
		return (0);

	write(STDOUT_FILENO, buf, actual);
	close(fd);

	return (actual);
}
