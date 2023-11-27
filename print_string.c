#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include "main.h"


/**
 * print_string - Prints a string
 * @ptr: Pointer to the va_list containing the string
 * @len: Pointer to the length counter
 */
void print_string(va_list ptr, int *len)
{
    char *str = va_arg(ptr, char*);

    if (str == NULL)
    {
	    write(1, "(null)", 6);
	    (*len) += 6;
    }
    else
    {
	    write(1, str, strlen(str));
	    (*len) += strlen(str);
    }
}
