#include "main.h"

/**
 *read_textfile - man main
 *@filename: file name
 *@letters: letter
 *Return: return as always
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, readr, writer;
	char *ptr;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	ptr = malloc(sizeof(char) * letters + 1);
	if (ptr == NULL)
		return (0);

	readr = read(file, ptr, letters);
	if (readr == -1)
		return (0);

	ptr[letters] = '\0';

	writer = write(1, ptr, readr);
	if (writer == -1)
		return (0);

	close(file);
	free(ptr);
	return (writer);
}
