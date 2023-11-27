#include <stdio.h>
#include "main.h"
#include <stdarg.h>
#include <string.h>

int _printf(const char *format, ...)
{
	int *ptr = format;
	printf("sa\n");
	return (ptr);
}
