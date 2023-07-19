#include "main.h"
/**
 * print_char - prints a char
 *
 * @list: variadic list where the function will find the char to print
 *
 * Return: 1
 */
int print_char(va_list list)
{
	char c;

	c = va_arg(list, int);

	if (c == '\0')
		return (0);
	write(1, &c, 1);
	return (1);
}

