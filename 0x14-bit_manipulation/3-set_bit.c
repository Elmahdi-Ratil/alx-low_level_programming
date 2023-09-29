#include "main.h"
/**
 *set_bit - set bit at index to 1
 *@n: decimal
 *@index: index of the bit to return
 *Return: -1 or 1
 *
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	*n = (*n | (1 << index));
	return (1);
}
