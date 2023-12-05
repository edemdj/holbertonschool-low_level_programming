#include "main.h"
/**
 * create_file - function that creates a file.
 *@filname:
 *@text_content:
 * Return:
 */
int create_file(const char *filename, char *text_content)
{
	unsigned int len = 0;
	int w, fd;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (; text_content[len]
			     ; len++);
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(STDOUT_FILENO, text_content, fd);

	if (fd == -1 || w == -1)
	{
		return (-1);
	}

	close(fd);

	return (1);
}
