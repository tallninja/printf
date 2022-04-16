#include "main.h"

/**
 * _strcpy - copies a string from src to dest
 * @src: src
 * @dest: dest
 * Return: pointer to dest;
 */

char *_strcpy(char *dest, char *src)
{
	unsigned long int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = src[i]; /* for the null byte at the end of the string */

	return (dest);
}
