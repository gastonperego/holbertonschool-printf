#include "main.h"
/**
 * print_d - prints an integer
 *
 * @list: variadic list where the function will find the integer to print
 *
 * Return: number of character printed
 */
int print_d(va_list list)
{
	unsigned int num, count_z, count, i;
	int a;

	a = va_arg(list, int);

	count = 0;
	if (a < 0)
	{
		a = a * -1;
		i = 45;
		count += write(1, &i, 1);
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

