#include "main.h"

int print_str(va_list list)
{
	int count;
	char *s;

	s = va_arg(list, char *);

	if (*s == '\0')
		return (0);

	count = 0;

	while (*s)
	{
		count += write(1, s, 1);
		s++;
	}

	return (count);
}

