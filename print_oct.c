#include "main.h"

/**
 * print_o - prints octal number
 * @args: args
 * Return: number of characters printed
 */

int print_o(va_list args)
{
	unsigned int number = va_arg(args, unsigned int);
	int i, j;
	char oct[200];

	i = 0;
	while (number >= 8)
		oct[i] = number % 8, number /= 8, i++;

	oct[i] = number;
	for (j = i; j >= 0; j--)
		_putchar(oct[j] + '0');

	return (i + 1);
}
