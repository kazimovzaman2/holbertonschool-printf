#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/**
 *_printf - printf
 *@format: A list of types of arguments passed to the function
 *
 *Return - integer
 */
int _printf(const char *format, ...)
{
	int i = 0;
	int len = 0;
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
			{
				_putchar(va_arg(ptr, int));
				i++;
			}
			else if (format[i + 1] == 's')
			{
				char *str = va_arg(ptr, char*);
				write(1, str, strlen(str));
				len += strlen(str);
				i++;
			}
			else if (format[i + 1] == '%')
			{
				_putchar('%');
				i++;
			}
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
