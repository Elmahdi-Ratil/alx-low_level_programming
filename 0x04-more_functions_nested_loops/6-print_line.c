#include "main.h"

/**
 * print_line - draws a straight line
 * @n: number of characters should be printed
 */
void print_line(int n)
{

if (n <= 0)
{
_putchar('\n');
}
else
{
int i = 1;

while (i <= n)
{
_putchar('_');
i++;
}
_putchar('\n');
}

}
