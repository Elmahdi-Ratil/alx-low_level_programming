#include <stdio.h>

/**
 * main - print the size of various type
 * Return: 0
 */

int main(void)
{
	int a;
	long int b;
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long int: %zu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));

	return (0);
}
