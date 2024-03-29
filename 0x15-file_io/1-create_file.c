#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: file to create.
 * @text_content: content written in the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int nlet;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nlet = 0; text_content[nlet]; nlet++)
		;

	rwr = write(fd, text_content, nlet);

	if (rwr == -1)
		return (-1);

	close(fd);

	return (1);
}
