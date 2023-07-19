#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
 * _printf - prints the arguments given in the indicated format
 *
 * @format: it gives the function the format in which the arguments must be
 * printed
 *
 * Return: number of cahracters printed
 */

int _printf(const char *format, ...)
{
	int i, j, count, find;
	va_list list;
	specifier_fn arguments[] = {
		{'c', print_char},
		{'d', print_d},
		{'i', print_d},
		{'s', print_str},
	};
	if (format == NULL)
		return (-1);
	va_start(list, format);
	count = 0;
	for (i = 0; *(format + i); i++)
	{
		if (*(format + i) == '%')
		{
			if (*(format + i + 1) == '\0')
				return (-1);
			find = 0;
			for (j = 0; j < 4; j++)
			{
				if (*(format + i + 1) == arguments[j].spec)
				{
					count += arguments[j].print(list);
					find = 1;
					format++;
					break; } }
			if (find != 1)
			{
				if (*(format + i + 1) == '%')
				{
					count += write(1, "%", 1);
					format++; }
				else
					count += write(1, (format + i), 1); } }
		else
			count += write(1, (format + i), 1); }
	va_end(list);
	return (count); }

