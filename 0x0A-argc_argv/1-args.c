#include <stdio.h>

/**
 * main - a program that prints the program name
 * @argc: the number of arguments, including the program name
 * @argv: an array containing the program arguments
 *
 * Return: 0 if successful, non-zero otherwise
 */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
