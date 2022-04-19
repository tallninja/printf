#include "main.h"

/**
 * print_o - prints octadecimal number
 * @args: args
 * Return: number of characters printed
 */

int print_o(va_list args)
{
	unsigned int i, j, number = va_arg(args, unsigned int);
	char oct[256];

	i = 0;
	while (number >= 8)
		oct[i] = number % 8, number /= 8, i++;

	oct[i] = number;
	for (j = i;; j--)
		_putchar(oct[i] + '0');

	return (i + 1);
}
