#include <stdio.h>
#include <stdarg.h>
#include "custom_printf.h"
/**
 * _printf - Custom printf function
 * @format: Format string
 *
 * Return: Number of characters printed (excluding null byte)
 */
int _printf(const char *format, ...)
{
int count = 0; /* Counter to keep track of characters printed */
va_list args;
va_start(args, format);

while (*format != '\0')
{
if (*format == '%')
{
format++; /* Move to the character after '%' */
switch (*format)
{
case 'c':
putchar(va_arg(args, int));
count++;
break;
case 's':
count += printf("%s", va_arg(args, char *));
break;
case '%':
putchar('%');
count++;
break;
default:
putchar('%');
putchar(*format);
count += 2;
}
}
else
{
putchar(*format);
count++;
}
format++;
}

va_end(args);
return (count);
}

/**
 * main - check the code
 * Return: Always 0
 */
int main(void)
{
char *str = "Barka da warhaka";
int printed = _printf("This is a character: %c\n", 'A');
printed += _printf("This is a string: %s\n", str);
printed += _printf("This is a percentage sign: %%\n");

printf("The total characters printed is: %d\n", printed);

return (0);
}

