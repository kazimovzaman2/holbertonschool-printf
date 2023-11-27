#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"




/**
 * _printf - Custom printf function
 * @format: A list of types of arguments passed to the function
 *
 * Return - integer
 */
int _printf(const char *format, ...)
{
	int i = 0, len = 0;
	va_list ptr;

	va_start(ptr, format);

	if (!format)
	{
		exit(98);
	}

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
				print_char(ptr, &len);
			else if (format[i + 1] == 's')
				print_string(ptr, &len);
			else if (format[i + 1] == '%')
			{
				_putchar('%');
				len++;
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
			len++;
		}
		i++;
	}

	va_end(ptr);

	return (len);
}
