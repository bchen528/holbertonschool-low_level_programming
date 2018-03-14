#include "holberton.h"

/**
 * main - main function
 * @argc: number of commandline arguments
 * @argv: commandline argument
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int fd1, fd2, actual, var_write;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

/*open file_from*/
	fd1 = open(argv[1], O_RDONLY);

	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

/*create and/or open file_to*/
	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[2]);
		exit(99);
	}

/*read text from file_from*/
/*write contents from file_from to file_to*/
	while ((actual = read(fd1, buf, 1024)) > 0)
	{
		if (actual == -1)
			exit(98);

		var_write = write(fd2, buf, actual);
		if (var_write == -1)
			exit(99);
	}

/*close files*/
	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd1\n");
		exit(100);
	}

	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd2\n");
		exit(100);
	}
	return (0);
}
