#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len, len2;

	len = _printf("%d\n", 4);
	len2 = printf("%d\n", 4);

	printf("%d\n", len);
	printf("%d\n", len2);
	return (0);
}
