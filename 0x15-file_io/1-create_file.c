#include "main.h"

/**
 *create_file - man main
 *@filename: file name
 *@text_content: letter
 *Return: return as always
 */
int create_file(const char *filename, char *text_content)
{
	int length;
	int val;
	int file_ = open(filename, O_CREAT | O_RDONLY | O_WRONLY | O_TRUNC, 0600);

	if (filename == NULL)
	{
		close(file_);
		return (-1);
	}

	if (file_ == -1)
	{
		close(file_);
		return (-1);
	}

	if (text_content == NULL)
	{
		text_content = "";
	}

	length = strlen(text_content);

	val = write(file_, text_content, length);

	if (val == -1)
	{
		close(file_);
		return (-1);
	}
	close(file_);
	return (1);
}
