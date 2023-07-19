#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct specifier_fn - a function pair
 * @spec: char - the format specifier
 * @print: function to print the data
 */
typedef struct specifier_fn
{
	char spec;
	int (*print)(va_list);
} specifier_fn;

int print_d(va_list list);
int print_str(va_list list);
int print_char(va_list list);
int _printf(const char *, ...);

#endif

