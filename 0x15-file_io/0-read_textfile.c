#include "main.h"

/**
 *read_textfile - man main
 *@filename: file name
 *@letters: letter
 *Return: return as always
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = 0;
	ssize_t count = 0, written = 0;
	char *buff;

	if (!filename)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (!buff)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buff);
		return (0);
	}
	count = read(fd, buff, letters);
	if (count != -1)
	{
		written = write(STDOUT_FILENO, buff, count);
		if (written == -1)
		{
			free(buff);
			return (0);
		}
	}
	free(buff);
	close(fd);
	return (count);
}
