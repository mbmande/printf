#include "main.h"

/**
 * print_d - it prints integer
 * @arges: argument parameter
 * Return: i
 */

int print_d(va_list arges)
{
	int o = va_arg(arges, int);
	int number, dig, lst = o % 10, ex = 1;
	int i = 1;

	o = o / 10;
	number = o;

	if (lst < 0)
	{
		_putchar('-');
		number = -number;
		o = -o;
		lst = -lst;
		i++;
	}

	if (number > 0)
	{
		while (number / 10 != 0)
		{
			ex = ex * 10;
			number = number / 10;
		}
		number = o;

		while (ex > 0)
		{
			dig = number / ex;
			_putchar(dig + '0');
			number = number - (dig * ex);
			ex = ex / 10;
			i++;
		}
	}
	_putchar(lst + '0');
	return (i);
}

/**
 * print_i - it prints the integers detects the base automatically
 * @arges: argument parameter
 * Return: i
 */

int print_i(va_list arges)
{
	int o = va_arg(arges, int);

	int number, dig, lst = o % 10, ex = 1;
	int i = 1;

	o = o / 10;
	number = o;

	if (lst < 0)
	{
		_putchar('-');
		number = -number;
		o = -o;
		lst = -lst;
		i++;
	}

	if (number > 0)
	{
		while (number / 10 != 0)
		{
			ex = ex * 10;
			number = number / 10;
		}
		number = o;

		while (ex > 0)
		{
			dig = number / ex;
			_putchar(dig + '0');
			number = number - (dig * ex);
			ex = ex / 10;
			i++;
		}
	}
	_putchar(lst + '0');
	return (i);
}



