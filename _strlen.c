#include "main.h"

/**
 * _strlen - calculates the length of a string
 * @str: the string
 * Return: returns the length of str
 */

int _strlen(char *str)
{
	unsigned long int length = 0;

	while (*str != '\0')
	{
		length++;
		str++;
	}

	length += 1; /* for the null byte at the end ot the string */

	return (length);
}
