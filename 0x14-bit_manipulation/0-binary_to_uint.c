#include "main.h"
/**
 *binary_to_uint - from binary to decimal
 *@b: string
 *Return: number as unsigned int
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int oss = 0, sum = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	i--;
	while (i >= 0)
	{
		if (b[i] == '1')
			sum += _pow(oss, 2);

		oss++;
		i--;
	}
	return (sum);
}
/**
 *_pow - calculates the number to power pow
 *@pow: power
 *@base: base to base the calculation on
 *Return: power
 *
 */
unsigned int _pow(unsigned int pow, int base)
{
	unsigned int sum = 1;

	if (pow == 0)
		return (1);
	while (pow > 0)
	{
		sum = sum * base;
		pow--;
	}
	return (sum);
}
