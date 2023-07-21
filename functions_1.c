#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
/**
 * print_char- prints a char to the std output
 *
 * @list: va_list of variable arguments that can be given to the function
 *
 * Return: number of chars printed
 */
int print_char(va_list list)
{
	int c = va_arg(list, int);

	_putchar(c);
	return (1);
}
/**
 * print_string- prints a string to the std output
 *
 * @list: va_list of variable arguments that can be given to the function
 *
 * Return: number of chars printed
 */
int print_string(va_list list)
{
	char *s = va_arg(list, char *);
	int a = 0;

	if (s == NULL)
	{
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');
		return (6);
	}
	else
	{
		while (s[a] != '\0')
		{
			_putchar(s[a]);
			a++;
		}
	}
	return (strlen(s));
}
/**
 * print_int- prints an integer to the std output
 *
 * @list: va_list of variable arguments that can be given to the function
 *
 * Return: number of character printed
 */
int print_int(va_list list)
{
	int a = va_arg(list, int);
	unsigned int num, count_z, count = 0, i;

	if (a < 0)
	{
		a = a * -1;
		_putchar('-');
		count++;
	}
	num = a;
	count_z = 1;

	while (num > 9)
	{
		num /= 10;
		count_z *= 10;
	}

	while (count_z >= 1)
	{
		i = ((a / count_z) % 10) + 48;
		count += write(1, &i, 1);
		count_z /= 10;
	}
	return (count);
}
