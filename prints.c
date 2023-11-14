#include "main.h"

/**
 * print_s - it prints the string in function
 * @args: string to be printed
 * Return: the lenght
 */

int print_s(va_list args)
{
	char *str;
	int i;
	int len;

	str = va_arg(args, char *);
	if (str == NULL)
	{
		str = "(null)";
		len = _strlen(str);
		for (i = 0; i < len; i++)
			_putchar(str[i]);
		return (len);
	}

	else
	{
		len = _strlen(str);
		for (i = 0; i < len; i++)
			_putchar(str[i]);
		return (len);
	}
}
