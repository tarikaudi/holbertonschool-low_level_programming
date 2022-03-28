#include "main.h"

/**
 *read_textfile - man main
 *@filename: file name
 *@letters: letter
 *Return: return as always
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, read, write;
	char *ptr;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	buf = malloc(sizeof(char) * letters + 1);
	if (ptr == NULL)
		return (0);

	read = read(file, ptr, letters);
	if (read == -1)
		return (0);

	ptr[letters] = '\0';

	write = write(1, ptr, read);
	if (write == -1)
		return (0);

	close(file);
	free(ptr);
	return (write);
}
