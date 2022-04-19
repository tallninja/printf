#include "main.h"

/**
 * print_b - converts unsigned int to binary
 * @args: args
 * Return: number of binary digits printed
 */

int print_b(va_list args)
{
	unsigned int number = va_arg(args, unsigned int);
	char binary[256], temp;
	int i = 0, len = 0, middle;

	do {
		binary[len] = number % 2 ? '1' : '0';
		number /= 2;
		len++;
	} while (number != 0);

	binary[len] = '\0'; /* null terminate the binary string */

	middle = len / 2;

	/* swap the numbers to reverse the binary string */
	for (i = 0; i < middle; i++)
	{
		temp = binary[i];
		binary[i] = binary[len - i - 1];
		binary[len - i - 1] = temp;
	}

	for (i = 0; i < len; i++)
		_putchar(binary[i]);

	return (len);
}
