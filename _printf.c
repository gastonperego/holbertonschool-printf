#include <stdarg.h>
#include "main.h"
/**
 * _printf - ...
 *
 * @format: ...
 *
 * Return: ...
 */
int _printf(const char *format, ...)
{
	va_list list;
	int i = 0, count = 0;

	va_start(list, format);

	if (format == NULL)
	{
		return (-1);
	}

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			if (func_percent(format[i + 1]) == 0)
			{
				if (format[i + 1] == '%')
				{
					_putchar('%');
					count++;
				}
				else
				{
					_putchar(format[i]);
					count++;
					_putchar(format[i + 1]);
					count++; } }
			else
				count += func_percent(format[i + 1])(list);
			i++; }
		else
		{
			_putchar(format[i]);
			count++; }
		i++; }
	va_end(list);
	return (count);
}
