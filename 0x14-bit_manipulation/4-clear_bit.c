#include "main.h"
/**
 *clear_bit - convert a bit to 0
 *@n: decimal
 *@index: index of the bit to return
 *Return: -1 or 1
 *
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	*n = (*n & ~(1 << index));
	return (1);
}
