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
	char *code;
	int (*print_func)(va_list);
} char_t;

int _putchar(char c);
int print_c(va_list args);
int print_s(va_list args);
int print_d(va_list args);
int print_i(va_list args);
int print_b(va_list args);
int print_u(va_list args);
int print_o(va_list args);
int print_x(va_list args);
int print_X(va_list args);
int print_S(va_list args);
int _printf(const char *format, ...);

#endif
