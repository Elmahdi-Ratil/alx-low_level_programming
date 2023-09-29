#include "main.h"
/**
 *flip_bits - number of bits need to shift to pass from n to m
 *@n: decimal
 *@m: decimal
 *Return: count
 *
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = 0;
	unsigned int count = 0;

	while (i < sizeof(unsigned long int) * 8)
	{
		if (((n >> i) ^ (m >> i)) & 1)
			count++;
		i++;
	}
	return (count);
}
