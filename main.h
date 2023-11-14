#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

typedef struct format
{
	char *p;
	int (*f)();
} struc;

int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list args);
int print_s(va_list args);
int _strlen(char *str);
int _strlenc(const char *str);
int print37(void);
int print_d(va_list arges);
int print_i(va_list arges);

#endif
