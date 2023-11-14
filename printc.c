#include "main.h"

/**
 * print_c - it prints the characters
 * @args: character to be printed
 * Return: 1
 */

int print_c(va_list args)
{
	char str;

	str = va_arg(args, int);
	_putchar(str);
	return (1);
}
