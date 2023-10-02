#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: 0 if failed, the number of bytes printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int o;
	ssize_t rb;
	ssize_t pb;


	buf = (char *)malloc(letters);

	if (buf == NULL)
	{
		return (0);
	}

	if (!filename)
		return (0);

	o = open(filename, O_RDONLY);
	if (o == -1)
		return (0);

	rb = read(o, buf, letters);
	if (rb == -1)
		return (0);

	pb = write(STDOUT_FILENO, buf, rb);

	if (pb != rb)
		return (0);

	close(o);

	return (pb);
}
