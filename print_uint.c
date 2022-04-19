#include "main.h"

/**
 * print_u - prints unsigned integer
 * @args: args
 * Return: number of characters printed
 */

int print_u(va_list args)
{
	unsigned int number = va_arg(args, unsigned int);
	int last_digit = number % 10, num = number / 10;
	int digit, base = 1, count = 1;

	if (num) /* checks to see if num > 10 */
	{
		while (num / 10)				 /* loop until num < 10 */
			base = base * 10, num /= 10; /* calculate base of the number */

		num = number / 10; /* reset the value of num to it's original value */
		while (base > 0)
		{
			digit = num / base;
			_putchar(digit + '0');
			num -= (digit * base);
			base /= 10;
			count++;
		}
	}

	_putchar(last_digit + '0');
	return (count);
}
