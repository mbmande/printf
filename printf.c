#include "main.h"

int _printf(const char *format, ...)
{
	struc s[] = {
		{"%c", print_c}, {"%s", print_s}, {"%%", print37}, {"%d", print_d}, {"%i", print_i}
	};

		va_list arges;
		int i = 0;
		int j;
		int lenght = 0;

		va_start(arges, format);
		if (format == NULL || (format[0] == '%' && format[1] == '\0'))
				return (-1);

Here:
		while (format[i] != '\0')
		{
			j = 4;
			while (j >= 0)
			{
				if (s[j].p[0] == format[i] && s[j].p[1] == format[i + 1])
				{
					lenght = lenght + s[j].f(arges);
					i = i + 2;
					goto Here;
				}
				j--;
			}
			_putchar(format[i]);
			i++;
			lenght++;
		}
		va_end(arges);
		return (lenght);
}

