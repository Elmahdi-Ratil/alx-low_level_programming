#include "main.h"
/**
 *print_binary - print binary of a decimanl
 *@n: decimal
 *
 */
void print_binary(unsigned long int n)
{
	unsigned long int i;

	if (n == 0)
	{
		putchar('0');
		return;
	}

	for (i = (sizeof(n) * 8) - 1; (int)i >= 0; i--)
	{
		if (1 & (n >> i))
			while ((int)i >= 0)
			{
				putchar((1 & (n >> i)) + '0');
				i--;
			}
	}
}
