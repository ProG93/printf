#include "main.h"

/**
 * print_char - print char
 * @arg: argument
 *
 * Return: integer
 */
int print_char(va_list arg)
{
	char c = va_arg(arg, int);

	_putchar(c);
	return (1);
}
