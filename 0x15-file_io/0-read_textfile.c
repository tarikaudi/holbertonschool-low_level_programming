#include "main.h"

/**
 *read_textfile - man main
 *@filename: file name
 *@letters: letter
 *Return: return as always
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int open_file = open(filename, O_RDONLY);
	char *ptr;
	int counter, re;

	buf = malloc(sizeof(char *) * letters);

	if (ptr == NULL)
	{
		close(open_file);
		return (0);
	}

	if (filename == NULL)
	{
		free(ptr);
		return (0);
	}
	
	if (open_file == -1)
	{
		free(ptr);
		close(open_file);
		return (0);
	}

	counter = read(open_file, ptr, letters);
	re = write(STDOUT_FILENO, ptr, counter);

	if (counter == -1 || re == -1)
	{
		close(open_file);
		free(ptr);
		return (0);
	}

	close(open_file);
	free(ptr);
	return (re);
}
}
