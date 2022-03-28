#include "main.h"

/**
 *read_textfile - man main
 *@filename: file name
 *@letters: letter
 *Return: return as always
 */
int create_file(const char *filename, char *text_content)
{
	int length = 0;
	int file, writer;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
	{
		return (-1);
	}

	lenght = strlen(text_content);

	writer = write(file_d, text_content, len_content);

	if (writer == -1)
	{
		close(file);
		return (-1);
	}
	close(file);
	return (1);
}
