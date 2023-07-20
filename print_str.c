#include "main.h"
/**
 * print_str - prints a string of characters
 *
 * @list: variadic list where the function will find the string to print
 *
 * Return: number of characters printed
 */
int print_str(va_list list)
{
	int count;
	char *s;

	s = va_arg(list, char *);

	if (s == NULL)
	{
		write(1, "(nil)", 5);
		return (5);
	}

	count = 0;

	while (*s)
	{
		count += write(1, s, 1);
		s++;
	}

	return (count);
}

