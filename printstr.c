#include "main.h"

/**
 * _strlen - it finds the lenght of a string
 * @str: the parameter
 * Return: i
 */

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}

/**
 * _strlenc - it finds the const lenght of a string
 * @str: parameter
 * Return: i
 */

int _strlenc(const char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}
