#include "main.h"

/**
 * _printf - it prints exactly what printf function prints
 * @format: it holds the printf place holder
 * Return: lenght
 */

int _printf(const char *format, ...)
{
	struc s[] = {
		{"%c", print_c}, {"%s", print_s}, {"%%", print37},
		{"%d", print_d}, {"%i", print_i}
	};

	va_list arges;
	int k = 0;
	int l;
	int lenght = 0;

	va_start(arges, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[k] != '\0')
	{
		l = 4;
		while (l >= 0)
		{
			if (s[l].p[0] == format[k] && s[l].p[1] == format[k + 1])
			{
				lenght = lenght + s[l].f(arges);
				k = k + 2;
				goto Here;
			}
			l--;
		}
		_putchar(format[k]);
		k++;
		lenght++;
	}
	va_end(arges);
	return (lenght);
}

