#include "main.h"

/**
 * print_s - prints a string
 * @args: args
 * Return: i number of characters printed
 */

int print_s(va_list args)
{
	int i;
	char *str;

	str = va_arg(args, char *);

	if (str == NULL)
	str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
	_putchar(str[i]);

	return (i);
}
