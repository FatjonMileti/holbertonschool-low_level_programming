#include "main.h"

/**
 * append_text_to_file - ...
 C* @filename: ...
 * @text_content: ...
 * Return: ...
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, wf, len = 0;


	if (text_content)
	{
		while (text_content[len])
			len++;
	}

	if (!filename)
		return (-1);

	file = open(filename, O_RDONLY | O_RDWR | O_APPEND);
	if (file == -1)
		return (-1);

	wf = write(file, text_content, len);
	if (wf == -1)
		return (-1);

	close(file);
	return (1);
}
