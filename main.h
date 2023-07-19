#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct
{
	char spec;
	int (*print)(va_list);
} specifier_fn;

int print_d(va_list list);
int print_str(va_list list);
int print_char(va_list list);
int _printf(const char *, ...);

#endif

