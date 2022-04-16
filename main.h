#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdlib.h>
#include <stdarg.h>

int _putchar(char c);
int _strlen(char *str);
char *_strcpy(char *dest, char *src);
char print_char(va_list ptr);
char print_string(va_list ptr);
int _printf(const char *format, ...);

#endif
