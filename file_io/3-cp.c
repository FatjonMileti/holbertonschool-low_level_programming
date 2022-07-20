#include "main.h"

/**
 * main - ...
 * @argc: ...
 * @argv: ...
 * Return: ...
 */
int main(int argc, char *argv[])
{
	int fd, fd1, rf, cl, cl1;
	char buf[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd1 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((rf = read(fd, buf, BUFSIZ)) > 0)
	{
		if (fd1 == -1 || write(fd1, buf, rf) != rf)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd);
			exit(99);
		}
	}
	if (rf == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	cl = close(fd);
	cl1 = close(fd1);
	if (cl == -1 || cl1 == -1)
	{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			exit(100);
	}
	return (0);
}
