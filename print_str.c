#include "main.h"

/**
 * print_str - print strings
 * @arg: argument
 *
 * Return: integer
 */
int print_str(va_list arg)
{
	char *str = va_arg(arg, char *);
	int count = 0;

	if (str == NULL)
		str = "null";
	while (*str)
	{
		_putchar(*str++);
		count++;
	}
	return (count);
}
