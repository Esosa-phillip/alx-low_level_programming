#include "main.h"

/**
 * read_textfile - Reads a text file and prints.
 * @letters: number of letters.
 * @filename: filename.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nwr, nrd;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));	
	if (!buf)
		return (0);

	nrd = read(fd, buf, letters);
	nwr = write(STDOUT_FILEN0, buf, nrd);

	close(fd);

	free(buf);

	return (nwr);
}
