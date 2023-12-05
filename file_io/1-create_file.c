#include "main.h"
/**
 * create_file - function that creates a file.
 *@filname:
 *@text_content:
 * Return:
 */
int create_file(const char *filename, char *text_content);
{
	char *buf;
	unsigned int len = 0;
	int r, w, fd;

	if (filname == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (; texte content[len]
			     ; len++);
	}

	buf = malloc(sizeof(char) * len);
	if (buf == NULL)
		return (0);
	
	o = open(filename, O_RDONLY);
        r = read(o, buffer, letters);
        w = write(STDOUT_FILENO, buffer, r);
        if (o == -1 || r == -1 || w == -1 || w != r)
                return (0);

}
