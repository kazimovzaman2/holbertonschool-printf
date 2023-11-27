#include <stdio.h>
#include "main.h"
#include <stdarg.h>
#include <string.h>

int _printf(const char *format, ...)
{
	int i = 0, len = 0;
	va_list ptr;

	va_start(ptr, format);
	
	while (format[len] != '\0')
	{
		if ((format[i] == '%') && (format[i + 1] == 'c'))
		{
			_putchar(va_arg(ptr, int));
			i++;
			len++;
		}
		else if ((format[i] == '%') && (format[i + 1] == '%'))
		{
			_putchar('%');
			i++;
			len++;
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
