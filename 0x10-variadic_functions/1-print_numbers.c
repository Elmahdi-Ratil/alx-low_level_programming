#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers separated by a given separator.
 *
 * @separator: Pointer to the separator string.
 * @n: The number of integers to be printed.
 * @...: Variable number of integers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i < n - 1 && separator && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
