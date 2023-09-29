#include "main.h"
/**
 *get_bit - return the bit pointed to by the index
 *@n: decimal
 *@index: index of the bit to return
 *Return: -1 or 1 or 0
 *
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	if (n & (1 << index))
		return (1);
	else
		return (0);
}
