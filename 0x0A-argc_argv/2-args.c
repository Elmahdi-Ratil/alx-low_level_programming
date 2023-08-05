#include <stdio.h>

/**
 * main - a program that prints all the program arguments
 * @argc: the number of arguments, including the program name
 * @argv: an array containing the program arguments
 *
 * Return: 0 if successful, non-zero otherwise
 */
int main(int argc, char **argv)
{
	if (*argv == NULL)
	{
		return (0);
	}

	printf("%s\n", *argv);

	return (main(argc - 1, argv + 1));
}

