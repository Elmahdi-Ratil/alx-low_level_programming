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
	(void)argc;

	printf("%s\n", *argv);


	return (0);
}
