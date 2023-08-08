#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: intger.
 * @av: char ointer to pointer.
 * Return: pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, x, y = 0, z = 0;
	char *ptr;

	if (ac == 0 || av == 0)
	{
		return (0);
	}
	i = 0;
	while (i < ac)
	{
		x = 0;
		while (av[i][x])
		{
			z++;
			x++;
		}
		z++;
		i++;
	}
	ptr = malloc((sizeof(char) * z) + 1);
	if (ptr == 0)
	{
		return (0);
	}
	i = 0;
	while (i < ac)
	{
		x = 0;
		while (av[i][x])
		{
			ptr[y] = av[i][x];
			x++;
			y++;
		}
		ptr[y] = '\n';
		y++;
		i++;
	}
	ptr[y] = '\0';
	return (ptr);
}
