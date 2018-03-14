#include "holberton.h"

/**
 * main - main function
 * @argcc: number of commandline arguments
 * @argv: commandline argument
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int fd1, fd2, actual, var_write, cl1, cl2;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

/*open file_from*/
	fd1 = open(argv[1], O_RDONLY);

	if (argv[1] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

/*create and/or open file_to*/
	fd2 = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (argv[2] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[2]);
		exit(99);
	}

/*read text from file_from*/
/*write contents from file_from to file_to*/
	while ((actual = read(fd1, buf, 1024)) != 0)
	{
		if (actual == -1)
			exit(98);

		var_write = write(fd2, buf, actual);
		if (var_write == -1)
			exit(99);
	}

	cl1 = close(fd1);
	cl2 = close(fd2);
	if (cl1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd1\n");
		exit(100);
	}

	if (cl2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd2\n");
		exit(100);
	}
	return (0);
}
