#include "main.h"
/**
 * get_endianness - checks the endianness of the system.
 * Return: 0 for big endian, 1 for little endian.
 */
int get_endianness(void)
{
	int n = 1;

	if (*(char *)&n == 1)
		return (1);
	else
		return (0);
}
