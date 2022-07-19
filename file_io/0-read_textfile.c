#include "main.h"

/**
 * read_textfile - ...
 * @filename: ...
 * @letters: ...
 * Return: ...
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, rf, wf;
	char *txt;

	if (!filename)
		return (0);

	txt = malloc(sizeof(char) * letters);
	if (txt == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	rf = read(file, txt, letters);
	if (rf == -1)
		return (0);

	wf = write(STDOUT_FILENO, txt, rf);
	if (wf == -1)
		return (0);

	free(txt);
	close(file);
	return (rf);
}
