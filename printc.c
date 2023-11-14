#include "main.h"

int print_c(va_list args)
{
	char str;

	str = va_arg(args, int);
	_putchar(str);
	return (1);
}
