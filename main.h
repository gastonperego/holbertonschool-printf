#ifndef HEADERFILE
#define HEADERFILE

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);

typedef struct a
{
	char c;
	int (*f)(va_list list);
} func_select;

void _putchar(char c);
int (*func_percent(char c))(va_list);
int print_int(va_list list);
int print_char(va_list list);
int print_string(va_list list);
#endif
