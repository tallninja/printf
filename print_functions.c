#include "main.h"

/**
 * print_char - prints a character
 * @ptr: arg_ptr
 */

void print_char(va_list ptr)
{
	_putchar(va_arg(ptr, int));
}

/**
 * print_string - prints a string
 * @ptr: ptr
 */

void print_string(va_list ptr)
{
	char *str = va_arg(ptr, char *);

	if (str == NULL)
		_putchar(0);

	while (str != '\0')
	{
		_putchar(str);
		str++;
	}
}
