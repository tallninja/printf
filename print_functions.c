#include "main.h"

/**
 * print_c - prints a character
 * @args: args
 * Return: 1 which is 1 character printed
 */

int print_c(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}

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
 * print_d - prints a signed integer
 * @args: args
 * Return: number of digits printed
 */
int print_d(va_list args)
{

	unsigned int absolute, aux, countnum, count;
	int n;

	count = 0;
	n = va_arg(args, int);
	if (n < 0)
		absolute = (n * -1), count += _putchar('-');

	else
		absolute = n;

	aux = absolute;
	countnum = 1;

	while (aux > 9)
		aux /= 10, countnum *= 10;

	while (countnum >= 1)
	{
		count += _putchar(((absolute / countnum) % 10) + '0');
		countnum /= 10;
	}
	return (count);
}

/**
 * print_i - prints unsigned integer integer
 * @args: args
 * Return: number of digits printed
 */

int print_i(va_list args)
{
	return (print_d(args));
}

/**
 * print_b - converts unsigned int to binary
 * @args: args
 * Return: number of binary digits printed
 */

int print_b(va_list args)
{
	unsigned int b = va_arg(args, unsigned int);
	char binary[256];
	char temp;
	int len = 0, i = 0, middle;

	do {
		if (b % 2 == 0)
			binary[len] = '0';
		else
			binary[len] = '1';
		b /= 2;
		len++;
	} while (b != 0);

	binary[len] = '\0';

	middle = len / 2;

	for (i = 0; i < middle; i++)
	{
		temp = binary[i];
		binary[i] = binary[len - i - 1];
		binary[len - i - 1] = temp;
	}
	for (i = 0; i < len; i++)
	{
		_putchar(binary[i]);
	}
	return (len);
}
