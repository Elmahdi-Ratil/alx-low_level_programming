#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - Sums all the parameters.
 *
 * @n: The number of parameters.
 * @...: Variable number of arguments to be summed.
 *
 * Return: The sum of all the parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int x;
	va_list ap;

	x = 0;
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		x += va_arg(ap, int);
	}
	va_end(ap);

	return (x);
}
