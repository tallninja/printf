#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct char_func - contains code and print function
 * @code: character code
 * @print_func: the associated print function
 */

typedef struct char_func
{
	char code;
	void (*print_func)(va_list);
} char_t;

int _putchar(char c);
int _strlen(char *str);
char *_strcpy(char *dest, char *src);
void print_char(va_list ptr);
void print_string(va_list ptr);
int _printf(const char *format, ...);

#endif
