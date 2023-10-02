#include "main.h"

size_t _strlen(const char *string);

/**
 * append_text_to_file - Appends text at the end of a file.
 *
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: -1 if fails,1 Otherwise.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o;
	int buff_size = 0;

	if (!filename)
		return (-1);

	if (text_content)
		buff_size = _strlen(text_content);

	o = open(filename,  O_WRONLY | O_APPEND);
	if (o == -1)
		return (o);

	if (write(o, text_content, buff_size) == -1)
		return (-1);

	close(o);

	return (1);
}

/**
 * _strlen - Counts the length of a string.
 *
 * @string: the string.
 *
 * Return: it's size.
 */
size_t _strlen(const char *string)
{
	int i = 0;

	while (string[i])
	{
		i++;
	}

	return (i);
}
