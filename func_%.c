#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * func_percent- decides what to do according what characater is after %
 *
 * @c: char after %
 *
 * Return: function
 */
int (*func_percent(char c))(va_list list)
{
	func_select choose[] = {
		{'d', print_int},
		{'i', print_int},
		{'c', print_char},
		{'s', print_string},
		{'\0', NULL},
	};
	int i = 0;

	while (i < 5 && c != choose[i].c)
	{
		i++;
	}
	if (choose[i].c == '\0')
	{
		return (0);
	}
	else
	{
		return (choose[i].f);
	}
}
