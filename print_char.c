#include <stdarg.h>
#include "main.h"

/**
 * print_char - Prints a character
 * @ptr: Pointer to the va_list containing the character
 * @len: Pointer to the length counter
 */
void print_char(va_list ptr, int *len)
{
	_putchar(va_arg(ptr, int));
	(*len)++;
}
