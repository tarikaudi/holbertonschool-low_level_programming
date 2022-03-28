#include "main.h"

/**
 *read_textfile - man main
 *@filename: file name
 *@letters: letter
 *Return: return as always
 */
int create_file(const char *filename, char *text_content)
{
	int file, writer, i = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_RDWR | O_APPEND);
	if (file == -1)
		return (-1);



	while (text_content[i])
		i++;

	if (text_content == NULL)
	{
		close(file);
		return (1);
	}
	else
	{
		writer = write(file, text_content, i);
	}

	if (writer == -1)
		return (-1);

	close(file);
	return (1);
}
