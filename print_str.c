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

/**
 * find_hex - find the hexadecimal expression for non printable characters
 * @c: non printable char
 * Return: i
 */
int find_hex(char c)
{
	int i;
	char dif = 7;
	char hex[2];

	hex[0] = c / 16;
	hex[1] = c % 16;
	for (i = 0; i < 2; i++)
	{
		if (hex[i] >= 10)
			_putchar('0' + dif + hex[i]);
		else
			_putchar('0' + hex[i]);
	}
	return (i);
}

/**
 * print_S - prints a string and non printable characters
 * are changed for \x
 * @args: args
 * Return: len
 */

int print_S(va_list args)
{
	char *str;
	int i, len = 0;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] > 0 && str[i] < 32) || (str[i] >= 127))
		{
			_putchar('\\');
			_putchar('x');
			len += 2 + find_hex(str[i]);
		}
		else
		{
			_putchar(str[i]);
			len++;
		}
	} /* end for */
	return (len);
}
