#include "main.h"

/**
 * print_x - prints hexadecimal numbers in lowercase
 * @args: args
 * Return: number of characters printed
 */

int print_x(va_list args)
{
	unsigned number = va_arg(args, unsigned int);
	int i, j;
	char hex[200];

	i = 0;
	while (number >= 16)
		hex[i] = number % 16, number /= 16, i++;

	hex[i] = number;
	for (j = i; j >= 0; j--)
	{
		switch (hex[j])
		{
		case 10:
			_putchar('a');
			break;
		case 11:
			_putchar('b');
			break;
		case 12:
			_putchar('c');
			break;
		case 13:
			_putchar('d');
			break;
		case 14:
			_putchar('e');
			break;
		case 15:
			_putchar('f');
			break;
		default:
			_putchar(hex[j] + '0');
		}
	}

	return (i + 1);
}

/**
 * print_X - print hexadecimal in uppercase
 * @args: args
 * Return: number of characters printed
 */

int print_X(va_list args)
{
	unsigned int number = va_arg(args, unsigned int);
	int i, j;
	char hex[256];

	i = 0;
	while (number >= 16)
		hex[i] = number % 16, number /= 16, i++;

	hex[i] = number;
	for (j = i; j >= 0; j--)
	{
		switch (hex[j])
		{
		case 10:
			_putchar('A');
			break;
		case 11:
			_putchar('B');
			break;
		case 12:
			_putchar('C');
			break;
		case 13:
			_putchar('D');
			break;
		case 14:
			_putchar('E');
			break;
		case 15:
			_putchar('F');
			break;
		default:
			_putchar(hex[j] + '0');
		}
	}

	return (i + 1);
}
