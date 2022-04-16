#include "main.h"

/**
 * print_char - prints a character
 * @ptr: ptr
 * Return: 1 which is 1 character printed
 */

int print_char(va_list ptr)
{
	_putchar(va_arg(ptr, int));

	return (1);
}

/**
 * print_string - prints a string
 * @ptr: ptr
 * Return: i number of characters printed
 */

int print_string(va_list ptr)
{
	int i;
	char *str;

	str = va_arg(ptr, char *);

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	return (i);
}
