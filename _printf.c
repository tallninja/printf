#include "main.h"

/**
 * _printf - produces output acording to a format
 * @format: format specifier
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int i, j, chars_printed = 0;
	va_list arg_ptr;

	char_t opt[] = {
		{'c', print_char},
		{'s', print_string},
		{'\0', NULL}};

	va_start(arg_ptr, format);

	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			j = 0;
			while (opt[j].code != '\0')
			{
				if (opt[j].code == format[i + 1])
				{
					opt[j].print_func(arg_ptr);
					chars_printed++;
				}
				j++;
			}
			i++;
		}
		else
			_putchar(format[i]);

		i++;
	}
	va_end(arg_ptr);

	return (chars_printed);
}
